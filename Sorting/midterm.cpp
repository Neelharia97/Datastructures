#include<iostream>
#include<math.h>
using namespace std;

bool sieveofEratisthenes(int n, bool isPrime[]) 
{ 
    // Initialize all entries of boolean array 
    // as true. A value in isPrime[i] will finally 
    // be false if i is Not a prime, else true 
    // bool isPrime[n+1]; 
    isPrime[0] = isPrime[1] = false; 
    for (int i=2; i<=n; i++) 
        isPrime[i] = true; 
  
    for (int p=2; p*p<=n; p++) 
    { 
        // If isPrime[p] is not changed, then it is 
        // a prime 
        if (isPrime[p] == true) 
        { 
            // Update all multiples of p 
            for (int i=p*2; i<=n; i += p) 
                isPrime[i] = false; 
        } 
    } 
} 

LeftTrunc(uint64_t n){
	int temp = n;
	int temp2;
	int count = 0;
	while(temp){
		count++;
		temp2 = temp%10;// to remove left most digit
		if(temp2 == 0)
			return false;
		temp = temp/10; //to reduce to remaining digit
}
	bool isPrime[n+1];
	sieveofEratisthenes(n,isPrime);

	for(int i = count; i>0; i--){
		int mod = pow(10,i);
		if(!isPrime[n%mod]){
			return false;
		}
	}
	return true;

}

RightTrunc(uint64_t n){
	bool isPrime[n+1];
	sieveofEratisthenes(n,isPrime);
	while(n){
		if(isPrime[n])
			n = n/10 ;//to get first digit
		return false;
}
	return true	;
}


int main(){
	int count= 0;
	int n = 11;
	while(count!=11){
		if(LeftTrunc(n) && RightTrunc(n)){
			count++;
		}
		n++;
	}
}