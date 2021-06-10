#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iomanip>      // std::setprecision
#include <math.h>
using namespace std;

long faktorial(long a){
	if(a>0){
		return (a*faktorial(a-1));}
	else{
		return 1;
	}
	
}

long permutasi(long n, long k){
	return(faktorial(n)/(faktorial(k)*faktorial(n-k)));
}

float binomial(int n, int k,float p){
	float result = 1;
	for(int i = 1; i<=k; i++){
	result = result * p;
	}
	for(int i = 1; i<=n-k; i++){
	result = result * (1-p);
	}
	result = result * permutasi(n,k);
	return result;
	}

int main(){
	int n = 4;
	int k = 2;
	float p = 0.75;
	cout<<binomial(n,k,p)<<"\n";
}
