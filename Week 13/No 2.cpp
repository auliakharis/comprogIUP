#include <iostream>
using namespace std;

long  perpangkatan(long a, long b){
	if(b>0){
		return (a*perpangkatan(a, b-1));}
	else{
		return 1;
	}
}

int main(){
	int n=10;
	int pangkat;
	for(int i=0;i<n;i++){
		if(i%2==0){
			cout<<perpangkatan(3,i);
		}
		else{
			cout<<perpangkatan(3,i)*-1;
		}
		cout<<",";
	}
}
