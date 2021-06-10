#include <iostream>
#include <math.h>
using namespace std;


float rata(int a[], int n){
	float mean;
	float total =0;
	for(int i=0;i<n;i++){
		total += a[i];
}	mean= total/n;
	return mean;
}

float stdev(int a[], int n){
	float st = 0;
	float st1;
	for(int i=0;i<n;i++){
		st += ((a[i]-rata(a,n))*(a[i]-rata(a,n)));
	}
	st1 = sqrt(st/(n-1));
	return st1;
}

float varians(int a[],int n){
	float var;
	var =stdev(a,n)*stdev(a,n);
	return var;
}

int main(){
	int size, angka[100];
	cout<<"n = ";
	cin>>size;
	for(int i=0;i<size;i++){
		cin>>angka[i];
	}

	cout<<"Rata-rata = "<<rata(angka,size)<<"\n";
	cout<<"Standar deviasi = "<<stdev(angka,size)<<"\n";
	cout<<"Varians = "<<varians(angka,size)<<"\n";
}
