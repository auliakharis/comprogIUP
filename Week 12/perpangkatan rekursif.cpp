#include <iostream>
using namespace std;

long  perpangkatan(long a, long b){
	if(b>0){
		return (a*perpangkatan(a, b-1));}
	else{
		return 1;
	}
}
long faktorial(long a){
	if(a>0){
		return (a*faktorial(a-1));}
	else{
		return 1;
	}
	
}
int main(){
	int size = 10;
	int pangkat = 2;
	cout<<perpangkatan(size,pangkat)<<"\n";
	cout<<faktorial(pangkat)<<"\n";
	
}
