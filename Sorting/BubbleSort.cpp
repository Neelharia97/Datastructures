#include<iostream>
using namespace std;

struct array{
	int A[100000];
	int length;
	int size;
};
void display(struct array *arr){
	for(int i =0; i<arr->length; i++){
		cout<<arr->A[i]<<" ";
	}
	cout<<'\n';
}
void swap(int *x, int *y){
	int *temp;
	*temp = *x;
	*x = *y;
	*y = *temp;
}

void Bubblesort(struct array *arr){
	int flag;
	for(int i = 0; i<arr->length-1; i++){
		flag = 0;
		for(int j = 0; j<arr->length-1-i; j++){
			if(arr->A[j]>arr->A[j+1]){
				swap(arr->A[j], arr->A[j+1]);
				flag =1;
			}
			if (flag =0){
				break;
			}
		}
	}
}

int main(){
	struct array arr;//{{20,21,2,3,5,10,1,20,21,2,3,5,10,1,20,21,2,3,5,10,1,20,21,2,3,5,10,1,20,21,2,3,5,10,1,20,21,2,3,5,10,1},42,50};
	arr.length =100000;
	arr.size = 100000;
	for(int i = 0; i<100000; i++){
		arr.A[i] = rand()%100000;
	}

	Bubblesort(&arr);
	display(&arr);
}