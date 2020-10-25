#include<iostream>
using namespace std;

struct array{
	int A[10];
	int size;
	int length;
};
void display(struct array arr){
	for(int i = 0; i<arr.length; i++){
		cout<<arr.A[i]<<" ";
	}
	cout<<"\n";
}

void swap(int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

}
int TransposeLinearSearch(struct array *arr, int x){
	
	for(int i = 0; i<=arr->length; i++){
			//cout<<arr->A[i]<<" ";
			if(arr->A[i] == x){
				//cout<<arr->A[i]<<" "<<i;
				swap(&arr->A[i],&arr->A[i-1]);
				//return arr->A[i];
			}
			cout<<arr->A[i];
	}
	//return -1;
}

int LinearSearch(struct array arr, int x){
	for(int i = 0; i<arr.length; i++){
	//	cout<<arr.A[i]<<" ";
	//	cout<<'\n';
		if(arr.A[i] == x){
			cout<<"Element: "<< arr.A[i]<< " found at index: " <<i<<'\n';	
		}
	}
	return 0;
}

void remove(struct array *arr,int index){
	int x = arr->A[index];
	for(int i = index; i<arr->length -1; i++){
		arr->A[i] = arr->A[i+1];
	}
	arr->length--;


}

void insert(struct array *arr, int x, int pos){
	for(int i = arr->length; i>pos; i--){
		arr->A[i] = arr->A[i-1];
	}
	arr->A[pos] = x;
	arr->length++;
	/*for(int i =0; i<arr->length; i++){
		cout<<arr->A[i]<<" ";
	}
	cout<<"\n"; */
}

void append(struct array *arr, int x ){
	if (arr->length<arr->size){
		arr->A[arr->length ++] = x;
	}
	/*for(int i = 0; i<=arr->length; i++){
		cout<<arr->A[i]<<" ";
	}
	cout<<'\n';*/
}

int main(){
	struct array arr = {{1,2,4,4,6},10,5};
	//search(arr, 10);
	//search(arr, 4);
	//append(&arr, 4);
	//display(arr);
	//insert(&arr, 10, 2);
	//display(arr);
	//remove(&arr,3);
	//display(arr);
	LinearSearch(arr, 4);
	cout<<TransposeLinearSearch(&arr, 6);
	

}















