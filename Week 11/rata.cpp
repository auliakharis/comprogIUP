#include<iostream>
using namespace std;

int main(){
	double A[1000];
	int n;
	cout<<"Berapa banyak n dalam array tersebut = ";
	cin>>n;
	for(int i =0;i<n;i++){
		cout<<"Masukkan data ke "<<i+1<<" = ";
		cin>>A[i];
	}
	float sum=0;
	for(int i=0;i<n;i++){
		sum += A[i];
	}
	float rata = sum/n;
	cout<<rata;
	
}

