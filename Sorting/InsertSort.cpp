#include<iostream>
using namespace std;

void insert(int a[], int n){
	for(int i = 1;i<n;i++){
		int j = i-1;
		int x = a[i];
		while(j>-1 && a[j]>x){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] =x;
	}

}

int main(){
	int i,j;
	//int a[] = {11,2,3,1,23,43,43};
	//insert(a,7);
	//for(i = 0; i<7; i++){
		//cout<<a[i]<<" ";
//	}
	cout<<'\n';
	int b[100000];
	for(i = 0; i<100000; i++){
		b[i] = rand()%100000;	 
	}
	insert(b,100000);
	for(i = 0; i<100000; i++){
		cout<<b[i]<<" ";
	}
	cout<<'\n';

}