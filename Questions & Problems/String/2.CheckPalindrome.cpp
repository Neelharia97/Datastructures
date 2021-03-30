#include<iostream>
#include<string>
using namespace std;
void checker(string a, char* rev, int n){
    int flag = 1;
    for(int i = 0; i<n;i++){
        flag = 0;
        if(a[i] == rev[i]){
            continue;
        }else{
            flag = 1;
        }
    }
    if(flag == 1){
        cout<<"Not Palindrome"<<endl;
    }
    else{
        cout<<"Palindrome"<<endl;
    }
    
}


void reverse1(string a, int n){
    char rev[n];
    for(int i = 0; i<n; i++){
         rev[i] = a[n-i-1];
      //  cout<<rev[i]<<" ";
    }
    checker(a,rev, n);
   
}




int main(){
    string str = "saippuakivikauppias";
//    checker(str);
    reverse1(str, str.length());
}