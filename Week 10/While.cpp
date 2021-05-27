#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int i,n,a=0;
	cout<<"n = ";
	cin>>n;
	for(i=0; i<n;i++){
		cout<<pow(3,i)<<" ";
	}
	cout<<"\n------------------------------------------------------------------------"<<endl;
	cout<<"n = ";
	cin>>n;
	while(a<n){
		cout<<pow(3,a)<<" ";
		a++;
	}
	int b=0;
	cout<<"\n------------------------------------------------------------------------"<<endl;
	cout<<"n = ";
	cin>>n;
	do{
		cout<<pow(3,b)<<" ";
		b++;
	}while(b<n);
	
	return 0;
	Bin(8,2|0.05);
}


