#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

void display(int a[], int size){
    for(int i = 0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

//Using sorted array and fixing 2 pointers low(l) and high(r) to check for sum, 
//If sum is less than k, increment l. Else if sum is less than k, decrease r.

int BetterTriplet(int a[], int size, int k){ //O(N^2)
    int total;
    for(int i = 0; i<size-2; i++){
        int l = i+1;
        int r = size-1;
        while(l<r){
            total = a[i]+a[l]+a[r];
            if(total == k){
                cout<<""<<a[i]<<" "<<a[l]<<" "<<a[r]<<endl;
                break;
            }
            else if(total<k){
                l++;
            }
            else{
                r--;
            }
        }
    }
    return 0;
}

//Uses three pointers at i = 0; j = i+1; k =j+1 and comparing all elements for the sum.

void NaiveTriplet(int a[], int size, int k){ //O(N^3)
    int sum = 0;
    for(int i = 0; i<size; i++){
        for(int j = i+1; j<size; j++){
            for(int q = j+1; q<size; q++){
                sum = a[i]+a[j]+a[q];
                if(sum == k){
                    cout<<a[i]<<" "<<a[j]<<" "<<a[q]<<endl;
                }
            }
        }
    }

}

void sort(int a[], int size){
    int flag;
    for(int i = 0; i<size;i++){
        flag = 0;
        for(int j = 0; j<size-1-i; j++){
            if(a[j]>a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
                flag = 1;
            }
            if (flag =0){
				break;
			}
        }
    }
}

int main(){
    int arr[] = {1, 4 ,45 ,6 ,10 ,8,55,1,5,1,5,6,88,64,50,1,51,410,5,5,510,54};
    int size = sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    
    auto start = high_resolution_clock::now();
    sort(arr,size);
    auto stop = high_resolution_clock::now();

    auto start1 = high_resolution_clock::now();
    NaiveTriplet(arr, size,k);
    auto stop1 = high_resolution_clock::now();

    auto start2 = high_resolution_clock::now();
    BetterTriplet(arr, size, k);
    auto stop2 = high_resolution_clock::now();

    auto duration_Sort = duration_cast<microseconds>(stop - start);
    auto duration_Naive = duration_cast<microseconds>(stop1 - start1);
    auto duration_Better = duration_cast<microseconds>(stop2 - start2);

    cout<<"Time by Sort method: "<<duration_Sort.count()<<" microseconds"<<endl;
    cout<<"Time by Naive method: "<<duration_Naive.count()<<" microseconds"<<endl;
    cout<<"Time by better method: " <<duration_Better.count()<<" microseconds"<<endl;
}