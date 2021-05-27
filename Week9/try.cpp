#include<iostream>
using namespace std;

int main(){
	string gender;
	int age;
	cout<<"What is your gender ? ";
	cin>>gender;
	cout<<"How old are you? ";
	cin>>age;
	if(gender=="P" || gender=="p" ){
		if(age>20){
			cout<<"you are an old girl";
		}
		else{
			cout<<"you're still a teenager";
		}
	}
	else{
		if(age>20){
			cout<<"you are an old boy";
		}
		else{
			cout<<"you're still a teenager";
		}
	}
}
