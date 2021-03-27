#include<iostream>
using namespace std;

class TwoStacks{
    private:
        int size;
        int *arr;
        int top1,top2;

    public:
        TwoStacks(int n){
            top1 = 0;
            top2 = n-1;
            size = n;
            arr = new int[size];
        }

        void push1(int x){
            if(top1<top2){
                arr[top1] = x;
                top1++;
            }
            else{
                cout<<"Stack Full1"<<endl;
            }
        }

        void push2(int x){
            if(top2>=top1){
                arr[top2] = x;
                top2--;
            }
            else{
                cout<<"Stack Full2"<<endl;
            }
        }
        int pop1(){
            int x = -1;
            if(top1 == 0 || top1 == -1){
                cout<<"Stack1 Empty"<<endl;
            }
            else{
                x = arr[top1];
                top1--;
            }
            return x;
        }
        
        int pop2(){
            int x2 = -1;
            if(top2>size-1){
                cout<<"Stack2 Empty"<<endl;
            }
            else{
                x2 = arr[top2];
                top2++;
            }
            return x2;
        }


        void display(){
            cout<<"Stack1: "<<" ";
            for(int i =top1; i>=0; i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
            cout<<"----------------";
            cout<<endl;
            cout<<"Stack2: "<<" ";
            for(int i = top1+1; i<=size-1; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

};

int main(){
    TwoStacks a(6);
    a.push1(1);
    a.push1(2);
    a.push1(3);
a.push1(4);
    a.push2(2);
    a.push2(1);
    cout<<a.pop1()<<" ";
    cout<<a.pop1()<<" ";
    cout<<a.pop2()<<" ";
    cout<<endl;
    a.display();
}