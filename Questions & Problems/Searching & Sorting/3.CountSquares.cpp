#include<iostream>
using namespace std;


int countSquare(int size){
    int count = 0;
    for(int i = 1; i*i<size; i++){
        cout<<i;
        count++;
    }
    return count;
}

int main(){
    int n = 20;
    cout<<countSquare(n);
}