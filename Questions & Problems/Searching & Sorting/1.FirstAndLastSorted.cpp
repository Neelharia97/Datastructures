#include<iostream>
using namespace std;

void printResult(int B[], int l, int h){

	for (int i = l; i<=h; i++){
	   
	    cout<<B[i]<<" ";
	}
	cout<<endl;
//cout<<B[];
}

void MergeSingle(int A[], int low, int mid, int high){
    int i = low;
    int j = mid+1;
    int k = low;
    int B[high+1];
    while (i <= mid && j <= high){
        if (A[i] < A[j]){
            B[k++] = A[i++];
        } else {
            B[k++] = A[j++];
        }
    }
    while (i <= mid){
        B[k++] = A[i++];
    }
    while (j <= high){
        B[k++] = A[j++];
    }
    for (int i=low; i<=high; i++){
        A[i] = B[i];
    }
    //printResult(A,low,high);
}


void mergeSort(int A[], int n){
	int p, l, h ,mid, i;
	for(p = 2; p<=n; p=p*2){
		for(i=0;i+p-1<=n;i=i+p){
			l=i;
			h=i+p-1;
			mid=(l+h)/2;
			 MergeSingle(A,l,mid,h);

		}
	}
	if(p/2<n){
	    MergeSingle(A,0,p/2-1,n-1);
	}
} 



int main(){
	int i, j;
	int a,b;
	int c[10];
    for(i = 0; i<2; i++){
        for( j = 0 ; j<10; j++){
            c[j] = rand()%10;
        }
        for(j = 0; j<10; j++){
            cout<<c[j]<<" ";
        }
        cout<<endl;
        mergeSort(c,sizeof(c)/sizeof(c[0]));
    }
    printResult(c,0, sizeof(c)/sizeof(c[0])-1);
	
}