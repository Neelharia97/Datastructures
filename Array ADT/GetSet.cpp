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
cout<<'\n';
}

float sum(struct array arr){
	int total = 0;
	for(int i = 0; i<arr.length; i++){
		total += arr.A[i];
	}
	return total;
	cout<<"total: "<< total<<'\n';

}

float avg(struct array arr){
	return sum(arr)/arr.length;
}

void min(struct array arr){
	int min = arr.A[0];
	for(int i = 1; i<arr.length; i++){
		if(arr.A[i]<min){
			min = arr.A[i];
		}
	}
}
void max(struct array arr){
	int max = arr.A[0];
	for(int i = 1; i<arr.length; i++){
		if(arr.A[i]>max){
			max = arr.A[i];
		}
	}

}

void get(struct array arr, int index){
	if(index>= 0 && index<arr.length){
		for(int  i = 0; i<arr.length; i++){
			if(i == index)
				cout<<arr.A[i]<<"\n";
		}
	}
}

void set(struct array arr, int element, int index ){
	if(index>0 && index<arr.length){

		for(int i = 0; i<arr.length; i++){
			if(i == index){
				arr.A[i] = element;
			}
			
		}
	}
	
}

int main(){
	struct array arr = {{1,23,22,3,2},10,5};
	set(arr,34,2);
	get(arr,3);
	max(arr);
	min(arr);
	sum(arr);
	avg(arr);
	display(arr);
}