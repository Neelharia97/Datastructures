#include <iostream>
using namespace std;

class LinkedList {
private:
    int l;
    class Node { // LinkedList::Node
        public:
            int data;
            Node* next,* prev;
            Node(int val, Node* n=nullptr): data(val), next(n),prev(n) {} 
    };
    
    Node* head,* tail;     
    public:
    LinkedList() : head(nullptr),tail(nullptr),l(0)  {
    }

    LinkedList(int val) : head(new Node(val)),l(0) {}

    ~LinkedList() {
        while(head != nullptr) {
            this->removeStart();
        }
    }
    
    LinkedList(const LinkedList& orig) = delete;

    LinkedList& operator =(const LinkedList& orig) = delete;
    
    void addEnd(int v) { // O(1)
        if (head != nullptr) {
  /*          Node* tmp = head;
            while (tmp->next != nullptr) {
                tmp = tmp->next;
            }
            tmp->next = new Node(v);*/
		Node* tmp = tail;
        tail->next = new Node(v);
        tail=tail->next;
        tail->prev=tmp;
        }
        else {
            addStart(v);
        }
        l++;
    }

    void addStart(const int v) { //O(1)
        if(head == nullptr)
        {
        head = new Node(v); //Need to be created with new, so it doesn't go out  of scope and destructed
        tail=head;
        }
        else
        {
         Node* tmp=new Node(v);   
           tmp->next=head;  
            head->prev=tmp;
            head=tmp;
         /* code */
        }
        l++;
    }
    // will add to min(length, i)

    

    void removeStart() { //O(1)
        if(head == nullptr){ 
            cout<<"Out of range";
        }
                else
        {   
        Node* temp = head->next;
        int v = head->data;
        delete head;
        head = temp;
        l--;
        }
    }

    void removeEnd() { //O(1)
        if (head==nullptr)
        {
           cout<<"Out of range";
        }
        else{
        
        int v = tail->data;
        if(tail==head)
        {   
        delete tail->next;
        tail=head=nullptr;
        }
        else{
        
        tail = tail->prev;
        delete tail->next;

        tail->next= nullptr;
        }
        //    cout<<" l = "<<l<<" popped "<<v<<endl;  
        l--;
        }
    } 

    int getLength() const { //O(1)
        /*Node  *p,*prev; 
        int count=0; 
         
        for (p = head; p->next != nullptr; prev = p, p = p->next)
        {
            count++;
         //   cout<<count<<". "<<p->data<<" ";
            
        }
            return count;
            */
           return l;
    }
};

int main() {
    LinkedList a;
    const int n = 10000;
    // For homework, use this main and implement a linkedlist with head and tail.
    //one of these operations is O(n). You may make that loop < 1000
    for (int i = 0; i < n; i++)
    a.addStart(i);  
    cout<<a.getLength()<< endl;
   for (int i = 0; i <10; i++)
     a.addEnd(i); 
     cout<<a.getLength()<< endl;
  

   for (int i = 0; i < n; i++)
      a.removeStart();
        cout<<a.getLength()<< endl;

   for (int i = 0; i < n; i++)
        a.removeEnd();
        
        cout<<a.getLength() << endl;
    /* 
#if 0
    //REALLY BAD. Don't do this
    for (int i = 0; i < a.getLength(); i++)
      cout << a.get(i); // 1 + 2 + 3 + ... + (n-1)+n O(n^2)
#endif
    for (LinkedList::iterator i = a; !i; ++i)
      cout << *i;
    return 0;
    */
}