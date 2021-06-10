#include<iostream>
using namespace std;

int main(){
int n, data[100], sum=0, max=0, min=0;
cout<<"banyaknya data = ";
cin>>n;
for(int i=0;i<n;i++){
	cout<<"masukkan data ke "<<i+1<<" ";
	cin>>data[i];
}

cout<<"PROGRAM DENGAN ARRAY"<<endl;
	min = max = data[0];
for(int i=0;i<n;i++){
	sum = sum + data[i];
	if(max<data[i]){
		max = data[i];
	}
	if(min>data[i]){
		min = data[i];
	}}
	
cout<<"rata  = "<<sum/n<<endl;
cout<<"min = "<<min<<endl;
cout<<"max = "<<max<<endl;}


