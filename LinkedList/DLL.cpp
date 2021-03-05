#include <iostream>
using namespace std;

class LinkedList {
private:
    class Node { // LinkedList::Node
        public:
            int data;
            Node* next;
            Node *tail;
            Node(int val, Node* n=nullptr): data(val), next(n),tail(NULL) {} 
    };
    
    Node* head;     
    int len;
public:
    LinkedList() : head(nullptr) {}
    LinkedList(int val) : head(new Node(val)) {}
    Node *get(){ return head;}
    ~LinkedList() {
        while(head != nullptr) {
            this->removeStart();
        }
    }
    
    LinkedList(const LinkedList& orig) = delete;
    LinkedList& operator =(const LinkedList& orig) = delete;
   /* friend ostream& operator <<(ostream& s, Node l ) {
		return s << Node;
	}*/
    void display(Node *n){
    	while(n){
    		cout<<n->data<<" ";
    		n = n->next;
    	}
        cout<<"\n\n";
    }


    void addEnd(int v) { // O(n)
        if (head != nullptr) {
            Node* tmp = head;
            while (tmp->next != nullptr) {
                tmp = tmp->next;
            }
            tmp->next = new Node(v);
            tmp->next->tail = tmp; // tail of next node will point to previous node
            len += 1;
        }
        else {
            addStart(v);
        }


    }

    void addStart(const int v) { //O(1)
        head = new Node(v, head); //Need to be created with new, so it doesn't go out  of scope and destructed
        if(head->next){
        	head->next->tail = head;
        }
        len++;
    }
    // will add to min(length, i)
    void insert(const int i, const int v) { //O(n)
        if (head != nullptr){
            Node* tmp = head;
            for (int j = 0; j < i; j++){
                if (tmp->next != nullptr) throw out_of_range("i was greater than length");
                tmp = tmp->next;
            }
            Node* newNode = new Node(v, tmp->next);
            tmp->next = newNode;
            len += 1;
        }
        else{
            addStart(v);
        }
        // display(head);
    }
    int removeStart() { //O(1)
        if(head == nullptr){ 
            throw out_of_range("Attempting to remove from an empty LL");
        }
        Node* temp = head->next;
        int v = head->data;
        if(head->next){
        	head->next->tail = head ->tail;
        }
        if(head->tail){
        	head->tail->next =head ->next;
        }

        delete head;
        head = temp;
        if(len == 0){
        	head = NULL;
        }
        len -= 1;
        return v;
        //display(head);
    }
    void removeEnd() { //O(n)
        if (head == nullptr)
            throw out_of_range("Attempting to remove from an empty LL");
            
        Node* prev;
        Node* p;
        for (p = head; p->next != nullptr; prev = p, p = p->next)
            ;
        if(p->next){
        	p->next->tail = p->tail;
        }
        if(p->tail){
        	p->tail->next = p->next;
        }

        delete p;
        len -=1;
        prev->next = nullptr;
        if(len == 0){
        	head = NULL;
        }
      
    }


    int getLength() const { //O(1)
        return len;
    #if 0
        int count = 0;
        for (Node* p = head; p != nullptr; p = p->next)
          count++;
        return count;
    #endif
    }
    
    int get(int i) {
        if(head != nullptr){
            Node* tmp = head;
            for (int counter = 0; counter < i; counter++){
                tmp = tmp->next;
                if(tmp == nullptr) throw out_of_range("bad index for get");
            }
            return tmp->data;
        }
        // https://stackoverflow.com/questions/2709719/throwing-out-of-range-exception-in-c
        throw out_of_range("Attempting to get from an empty LL");
    }
 #if 0
    private:
        Node* current;
    public:
        Iterator(LinkedList& list) {
            current = list.head;
        }
        bool operator !() const {
            return current != nullptr;
        }
        void operator++() {
            current = current -> next;
        }
        int& operator *() const {
            return current->data;
        }
 #endif
  
};


int main() {
    LinkedList a;
    const int n = 1000;
    // For homework, use this main and implement a linkedlist with head and tail.
    //one of these operations is O(n). You may make that loop < 1000
    for (int i = 0; i < n; i++){
   		a.addStart(i);
    }
    cout<<"Length: "<<a.getLength()<<'\n';
   	a.display(a.get());

    for (int i = 0; i < n; i++){
      a.addEnd(i);
    }
   cout<<"Length: "<<a.getLength()<<'\n';
    a.display(a.get());


    for (int i = 0; i < n; i++){
        a.removeStart();
    }
   cout<<"Length: "<<a.getLength()<<'\n';
    a.display(a.get());



    for (int i = 0; i < n/2; i++){
        a.removeEnd();
    }
   cout<<"Length: "<<a.getLength()<<'\n';
    a.display(a.get());
#if 0
    //REALLY BAD. Don't do this
    for (int i = 0; i < a.getLength(); i++)
      cout << a.get(i); // 1 + 2 + 3 + ... + (n-1)+n O(n^2)
#endif
    /*
    for (LinkedList::iterator i = a; !i; ++i)
      cout << *i;
    return 0;*/
}