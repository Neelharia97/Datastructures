#include<iostream>
using namespace std;

struct array{
	int A[10];
	int length;
	int size;
};

int IterativeBinarySearch(struct array arr, int key){
	int l = 0;
	int h = arr.length-1;
	int mid;
	//cout<<l<<h<<mid;
	while(l<=h){
		mid = (l+h)/2;
		if(key == arr.A[mid]){
			cout<<arr.A[mid];
		}
		else if(key<arr.A[mid]){
			h = mid-1;
		}
		else{
			l = mid+1;
		}
	}
	return -1;
}

int main(){
	struct array arr = {{1,2,4,5,6},5,10};
	IterativeBinarySearch(arr,3);
}