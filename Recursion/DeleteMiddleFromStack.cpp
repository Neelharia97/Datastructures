// Initialize a stack data structure and push the elements in it.
// Create a function deleteMiddle that accepts the stack, it’s size and a variable to represent the current index as it’s parameters. Set the default value of the current index variable as 0.
// Check if the stack is empty or the current index variable is equal to the size of the stack, return.
// Create a variable x and store the top of the stack in it. Remove/delete the element at the top of the stack.
// Make the recursive call to the function itself with the stack, size of the stack and value of the current index variable+1 as it’s parameters.
// Check if the value of the current index variable is not equal to the half of the size of stack i.e. if the value of the current index variable is not equal to the middle index of the stack, push the variable x back in the stack.
// After that, traverse while the size of the stack is not equal to 0. Create a variable p and store the top of the stack in it, pop the top of the stack and print the variable p for all the iterations.



#include<iostream>
#include<stack>
using namespace std;

void middle(stack<int> &m, int k, int i = 0){
    //Base Condition
    if(k == 0 || i == k){
        return;
    }
    else{
        int x = m.top();
        m.pop();
        //Stack is now smaller
        middle(m,k,i+1);
        if(i !=k/2){
            m.push(x);
        }
    }
    
}
int main(){
    stack<int> m;
    for(int i = 1; i<=10000; i++){
        m.push(i);
    }
    middle(m,m.size());
    while(!m.empty()){
        int x = m.top();
        m.pop();
        cout<<x<<" ";
    }
}
