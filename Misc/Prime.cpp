#include<iostream>
using namespace std;

uint64_t improved(uint64_t n){
	uint64_t count = 1;
	bool *isPrime = new bool[n+1];
	for(uint64_t i = 3; i<=n; i+=2)
		isPrime[i] = true;
	for(uint64_t i = 3; i<=n ; i+=2){
		if(isPrime[i]){
			count++;
			for(uint64_t j = i*i; i<=n; j+=2*i){
				isPrime[j] = false;
			}
			cout<<i<<" ";
			cout<<'\n';
			cout<< isPrime[i]<< " " ;
		}

		
	}
	return count;
}
uint64_t prime(uint64_t n){ //O(nloglogn)
	uint64_t count = 0;
	bool *isPrime = new bool[n+1];
	for(uint64_t i = 2; i<= n; i++)
		isPrime[i] = true;
	for(uint64_t i =2; i<=n; i++){
		if(isPrime[i]){
			count++;
			for(uint64_t j = 2*i; j <=n; j+=i){
				isPrime[j] = false;
			}	
			cout<<i<<" ";
			cout<<'\n';
			cout<< isPrime[i]<< " " ;
		}

				
	}
return count;
}

int main(){
	improved(100);
//	cout<<prime(1000);

}