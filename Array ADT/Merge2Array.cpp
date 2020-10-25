#include<iostream>
using namespace std;

struct array {
	int A[10];
	int length;
	int size;
};
void merge(struct array *arr1,struct array *arr2){
	int i,j,k;
	i = j = k = 0;
	int C[10]; 
	while(i<arr1->length && j<arr2->length){
		if(arr1->A[i]<arr2->A[j]){
			C[k++] = arr1->A[i++];
		}
		else{
			C[k++] = arr2->A[j++];
		}
	}

	int length_C = arr1->length + arr2->length;

	for(; i<arr1->length; i++){
		C[k++] = arr1->A[i];
	}
	for(; j<arr2->length; j++){
		C[k++] = arr2->A[j];
	}
	for(int i = 0; i<length_C; i++){
		cout<<C[i]<<" ";
	}

}

int main(){
	struct array arr1 = {{1,3,5,7,9},5,10};
	struct array arr2 = {{2,4,6,8,10},5,10};

	merge(&arr1,&arr2);
}

