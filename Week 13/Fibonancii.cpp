//Inti dari Fibonanci itu adalah penjumlahan F(n-1) + F(n-2) ketika nilai n>=2

#include<iostream>
using namespace std;

int fib(int n){
	if(n>=3){
		return fib(n-1)+fib(n-2);
	}
	else{
		return 1;
	}
}


int main(){
	for(int i=1;i<=10;i++){
		cout<<fib(i)<<",";
	}
	
}
