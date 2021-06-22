#include<iostream>
using namespace std;

int main(){
	int n=3;
	float ye;
	float sn = 0;
	for(int i=1;i<=n;i++){
		float deret = 0;
		for(int j=1;j<=i;j++){
		deret = deret+j;
		ye = 1/deret;
		}
		cout<<ye<<endl;
		sn= sn+ye;
	}
	cout<<sn;
	
}

