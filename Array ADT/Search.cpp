#include<iostream>
using namespace std;

struct array{
	int A[10];
	int length;
	int size;
};
int RecursiveBinarySearch(int a[],int l, int h, int key){
    int mid =0;
    
    while(l<=h){
        mid = (l+h)/2;
        if(key == a[mid]){
            return mid;
        }
        else if( key<a[mid]){
            RecursiveBinarySearch(a, l , mid-1, key);
        }
        else{
            RecursiveBinarySearch(a, mid+1 , h, key);
        }
    }
    return -1;
}

int IterativeBinarySearch(struct array arr, int key){
	int l = 0;
	int h = arr.length-1;
	int mid;
	//cout<<l<<h<<mid;
	while(l<=h){
	    mid = (l+h)/2;
		if(key == arr.A[mid]){
			return mid;
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
//	cout<<IterativeBinarySearch(arr,5)<<'\n';
    cout<<RecursiveBinarySearch(arr.A,0,arr.length,2);
}