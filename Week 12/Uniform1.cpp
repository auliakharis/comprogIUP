#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <iomanip>      // std::setprecision
#include <math.h>
using namespace std;

double Uniform (double a, double b)
{
 double  u, Unif;
   u = rand()%100;
   Unif = (b-a) * u/100 + a;
   return Unif;
}

int main()
  
{ int i,N;
  
  /* initialize random seed: */
    srand (time(NULL));
    cout << "Enter number of random number you generated : ";
    cin >> N;
    
    cout << "Here is your "<< N << " random number U(0,1) that you want to generate. \n";
 for (i=1;i<N;i++)
 {
  cout << Uniform(0,100) <<endl;
 }
 
}

