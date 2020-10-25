#include<iostream>
using namespace std;

struct array{
	int A[10];
	int length;
	int size;

};

void display(struct array arr){
	for(int i = 0; i<arr.length; i++){
		cout<<arr.A[i]<<" ";
	}
	cout<<'\n';
}

void leftShift(struct array *arr){
	int temp = arr->A[0] ;
	for(int i = 1; i<=arr->length-1; i++){
		arr->A[i-1] = arr->A[i];
	}
	arr->A[arr->length-1] = temp;
	display(*arr);
}

void reverse1(struct array arr){
	int B[10],i,j;
	for(i=0, j =arr.length-1; j>=0; i++,j--){
		B[j] = arr.A[i];
	}
	for(i = 0; i<=arr.length-1; i++){
		arr.A[i] = B[i];
	}
	display(arr);
}

void reverse(struct array arr){
	int temp,i,j;
	for( i = 0,j = arr.length-1; i<j; i++,j--){
		temp = arr.A[i];
		arr.A[i] = arr.A[j];
		arr.A[j] = temp;
	}
	display(arr);

}


int main(){
	struct array arr =  {{1,2,3,4,5,6,7,8,9,10},10,10};
	reverse(arr);
	reverse1(arr);
	for(int i = 0; i<10; i++){	
		leftShift(&arr);
	//display(arr);
	}
}