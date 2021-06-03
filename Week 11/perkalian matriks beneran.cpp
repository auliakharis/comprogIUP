#include <iostream>
using namespace std;

int main(){
	int n1,m1,n2,m2;
	float x[100][100],y[100][100],xy[100][100];
	cout<<"program Perkalian Matriks \n";
	cout<<"masukkan jumlah baris matriks pertama \t = ";
	cin>>n1;
	cout<<"masukkan jumlah kolom matriks pertama \t = ";
	cin>>m1;
	cout<<"masukkan jumlah baris matriks kedua \t = ";
	cin>>n2;
	cout<<"masukkan jumlah kolom matriks kedua \t = ";
	cin>>m2;
	
	for(int i=0;i<n1;i++){
		for(int j=0;j<m1;j++){
			cout<<" masukkan data baris ke "<<i+1<<" kolom ke "<<j+1<<"= ";
			cin>>x[i][j];
		}
	}
	for(int i=0;i<n1;i++){
		for(int j=0;j<m1;j++){
		cout<<x[i][j];
		}cout<<endl;
	}
	
	for(int i=0;i<n2;i++){
		for(int j=0;j<m2;j++){
			cout<<" masukkan data baris ke "<<i+1<<" kolom ke "<<j+1<<"= ";
			cin>>y[i][j];
		}
	}
	for(int i=0;i<n2;i++){
		for(int j=0;j<m2;j++){
		cout<<y[i][j];
		}cout<<endl;
	}
	if(m1==n2){
		
		for(int i=0;i<n1;i++){
			for(int j=0;j<m2;j++){
				xy[i][j]=0;
				for(int k=0;k<m1;k++){
					xy[i][j]= xy[i][j] + (x[i][k]*y[k][j]);
				}
			}
		}
	for(int i=0;i<n1;i++){
		for(int j=0;j<m2;j++){
		cout<<xy[i][j];
		}cout<<endl;
	}
}}
