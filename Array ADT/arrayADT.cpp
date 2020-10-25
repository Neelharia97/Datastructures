#include<iostream>
using namespace std;

struct Array {
	int *A;
	int size;
	int length;
};

int main(){
	struct Array arr;
	cout<<"enter size: "<<'\n';
	cin>>arr.size;
	arr.A = new int[arr.size];
	cout<<"Enter length: ";
	cin>>arr.length;
	cout<<"Enter Numbers: ";
	for(int i = 0; i<arr.length; i++){
		cin>>arr.A[i];
	}
	
	cout<<"The Numbers are: "<<'\n';
	for(int i = 0; i<arr.length; i++){
		cout<<arr.A[i]<<'\n';
	}
}

