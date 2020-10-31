#include<iostream>
using namespace std;;



void display(int a[],int n){
	for(int i = 0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

void selectionSort(int a[], int n){
	int i, j, k;
	for(i = 0; i<n-1; i++){
		for(j = k = i; j<n; j++){
			if(a[j]<a[k]){
				k = j;
			}
			swap(a[k],a[i]);
		}
	}

}

int main(){
	int i;
	int n = 100 000;
	int a[n];
	for(i = 0; i<n ; i++){
		a[i] = rand()%n;
	}

	selectionSort(a,n);
	display(a,n);
}