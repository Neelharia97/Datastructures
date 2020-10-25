#include<iostream>
using namespace std;


struct array {
	int A[10];
	int length;
	int size;

};
void display(struct array arr){
	for(int i = 0; i<arr.length; i++){
		cout<<arr.A[i]<<" ";
	}
	cout<<"\n";
}

int isSorted(struct array arr){
	for(int i = 0; i<arr.length-1; i++){
		if(arr.A[i]>arr.A[i+1]){
			return 0;
		}
	}
		return 1;
	}


void insert(struct array arr,int key){
	int i = arr.length-1;
	if(arr.length == arr.size){
		return;
	}
	while(arr.A[i]>key){
		arr.A[i+1] = arr.A[i];
		i--;
	}
	arr.A[i+1] = key;
	arr.length++;
	display(arr);
}

int main(){
	struct array arr ={{1,2,4,5,6,7},6,10};
	insert(arr,3);
	isSorted(arr);
}