#include<iostream>
using namespace std;

int knapsack(int val[], int wt[], int N, int W){
    //base condition
    if(N == 0 || W == 0){
        return 0;
    }
    else if(wt[N-1]<=W){
        return max(val[N-1]+knapsack(val, wt,N-1, W-wt[N-1]),knapsack(val, wt, N-1, W));
    }
    else if(wt[N-1]>W){
        return knapsack(val,wt,N-1, W); 
    }
}


int main(){
    int N = 3;
    int W = 4;
    int values[] = {1,2,3};
    int weight[] = {4,5,1};
    cout<<knapsack(values, weight, N, W);
}