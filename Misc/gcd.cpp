#include<iostream>
#include<cmath>
using namespace std;
int min(int a, int b){
	if(a<=b){
		return a;
	}
	else{
		return b;
	}
}

int gcdBrute(int a, int b){
	int biggestDivisor = 1;
	for(int i = min(a,b); i>2; i--){
		if (a % i == 0 && b % i == 0)
				return i;
	}
	return biggestDivisor;

}

int gcdEuclid(int a, int b){
	while(b!=0){
		int temp = a%b;
		a = b;
		b = temp;
	}
	return a;
}

int main(){
	cout<<"Euclidean: " <<gcdEuclid(45,36)<<'\n';
	cout<<"BruteForce: "<<gcdBrute(45,36)<<'\n';

}