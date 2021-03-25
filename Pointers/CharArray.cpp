// Rule - A string in C/C++ is ternminated by NULL
#include<iostream>
using namespace std;

void print(char *C){
    int i = 0;
    while(C[i]!='\0'){ //*(C+i) == C[i], both mean that base address of C + address of i
         cout<<C[i]<<'\n';
        i++;
    }

}

int main(){
    char C[20] = "Hello";
    print(C);
}