#include<iostream>
#include<time.h>
using namespace std;
void display(int a[],int n){
	for(int i = 0; i<n ;i++){
		cout<<a[i]<<" ";
	}
	cout<<'\n';
}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void fischerYates(int a[],int n){
	srand(time(NULL));
	for(int i = n-1; i>=1; i--){
		int j = rand()%(i+1);
		swap(&a[i], &a[j]);
	}
}

int main(){
	int a[] = {12,4,2,214,1,2,2,4};
	int n = 8;
	for(int i = 0; i<120; i++){
	fischerYates(a,n);
	display(a,n);
}
}