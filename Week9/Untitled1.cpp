/*
 #include<iostream>
using namespace std;

int main(){
	int a;
	cout<<"input the number ";
	cin>>a;
	if(a%2==0){
		cout<<"even number";
	}
	else{
		cout<<"odd number";
	}
	cout <<"\n\nThis is my first program that I have ever made in C++\n";
 	cout << "This is made in DEV 5.11 C++.\n\n";
 	cout << "Press ANY CHARACTER to Exit...";
 	
 	char quit='q';
 	cin >> quit;
 	return 0;

}
*/
/* Nilai angka (86-100) : Nilai A / Istimewa
Nilai angka (76-85) : Nilai AB / Baik Sekali
Nilai angka (66-75) : Nilai B / Baik
Nilai angka (61-65) : Nilai BC / Cukup Baik
Nilai angka (56-60) : Nilai C / Cukup
Nilai angka (41-55) : Nilai D / Kurang
Nilai angka (0-40) : Nilai E / Kurang Sekali
*/

/*
#include<iostream>
using namespace std;

int main(){
	int score;
	cout<<"Enter your score : ";
	cin>>score;
	if(score<=40){
		cout<<"Your grade is E";
	}
	else if(score>40 && score<=55){
		cout<<"Your grade is D";
	}
	else if(score>55 && score<=60){
		cout<<"Your grade is C";
	}
	else if(score>61 && score<=65){
		cout<<"Your grade is BC";
	}
	else if(score>66 && score<=75){
		cout<<"Your grade is B";
	}
	else if(score>75 && score<=86){
		cout<<"Your grade is AB";
	}
	else{
		cout<<"Your grade is A";
	}
}//can be replaced by float instead of int
*/



/* Nilai angka (86-100) : Nilai A / Istimewa
Nilai angka (76-85) : Nilai AB / Baik Sekali
Nilai angka (66-75) : Nilai B / Baik
Nilai angka (61-65) : Nilai BC / Cukup Baik
Nilai angka (56-60) : Nilai C / Cukup
Nilai angka (41-55) : Nilai D / Kurang
Nilai angka (0-40) : Nilai E / Kurang Sekali
*/



#include<iostream>
using namespace std;

int main(){
	int score;
	cout<<"Enter your score : ";
	cin>>score;
	if(score>=40){
		if(score<=55){
			cout<<"Your grade is D";
		}
		else if(score<=60){
			cout<<"Your grade is C";
		}
		else if(score<=65){
			cout<<"Your grade is BC";
		}
		else if(score<=75){
			cout<<"Your grade is B";
		}
		else if(score<=85){
			cout<<"Your grade is AB";
		}
		else{
			cout<<"Your grade is A";
		}
	}
	else{
		cout<<"your grade is E";
	}
}//can be replaced by float instead of int


/* Nilai angka (86-100) : Nilai A / Istimewa
Nilai angka (76-85) : Nilai AB / Baik Sekali
Nilai angka (66-75) : Nilai B / Baik
Nilai angka (61-65) : Nilai BC / Cukup Baik
Nilai angka (56-60) : Nilai C / Cukup
Nilai angka (41-55) : Nilai D / Kurang
Nilai angka (0-40) : Nilai E / Kurang Sekali
*/


#include<iostream>
using namespace std;

int main(){
	float score;
	cout<<"Enter your score : ";
	cin>>score;
	if(score<=40) // False
		cout<<"Your grade is E";
	else if(score<=55) // else if(score>40 && score <= 55)
		cout<<"Your grade is D";
	else if(score<=60) // else if(score>55 && score <= 60)
		cout<<"Your grade is C";
	else if(score<=65){ // else if(score>60 && score <= 65)
		cout<<"Your grade is BC";
		cout<<"your grade need to be improved";
	}
	else if(score<=75){ // else if(score>65 && score <= 75)
		cout<<"Your grade is B";
	}
	else if(score<=86){ // else if(score>75 && score <= 86)
		cout<<"Your grade is AB";
	}
	else{ //else if(score>86 && score <= 100)
		cout<<"Your grade is A";
	}
}//can be replaced by float instead of int
