#include<iostream>
#include<math.h>

using namespace std;
int main(){
	float c,r,f,k;
	int p; 
	
	cout<<"1. Celsius\n2. Reamur\n3. Farenheit \n4. Kelvin\nMasukkan Pilihan : ";
	cin>>p;
	
	if (p == 1){
		cout<<"Masukkan Nilai Suhu : ";
		cin>>c;
	}else if(p == 2){
		cout<<"Masukkan Nilai Suhu : ";
		cin>>r;
		c = 5*r/4;
	}else if(p == 3){
		cout<<"Masukkan Nilai Suhu : ";
		cin>>f;
		c = (5/9)*(f-32); 
	}else if(p == 4){
		cout<<"Masukkan Nilai Suhu : ";
		cin>>k;
		c = k-273;
	}
	r = 4*c/5;
	f = (9*c/5)+32;
	k = c+237;
	cout<<"Suhu Celcius		: "<<c<<endl;
	cout<<"Suhu Reamur		: "<<r<<endl;
	cout<<"Suhu Ferenheit		: "<<f<<endl;
	cout<<"Suhu Kelvin		: "<<k<<endl;
}
