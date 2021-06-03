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
	
	for(int i=0;i<m1;i++){
		for(int j=0;j<n1;j++){
		cout<<x[j][i];
		}cout<<endl;
	}	
	
}
