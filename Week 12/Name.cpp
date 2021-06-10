#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iomanip>      // std::setprecision
#include <math.h>
using namespace std;

void name(string a){
	cout<<"hello " <<a<<endl;
}
void substraction(int a, int b){
	cout<<a+b<<endl;
}

int main(){
	string a = "aulia";
	name(a);
	substraction(10,9);
}
