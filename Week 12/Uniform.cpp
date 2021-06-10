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

double MeanData(double x[100],int K)
{
 double sum =0, mean;
 int l;
 for(l=0;l<K;l++)
 {sum=sum+x[l];
 }
 mean=sum/K;
 return mean;
}

double VarData(double y[100], double ymean,int K)
{double sqDiff = 0;
    for (int i = 0; i < K; i++)
        sqDiff += (y[i] - ymean) * (y[i] - ymean);
    return sqDiff / (K-1);
}

int main()
  
{ int i,N,lb,ub;
  double data[100],average,variance;
  
  /* initialize random seed: */
    srand (time(NULL));
    cout << "Enter number of random number you generated : ";
    cin >> N;
    cout << "Enter the LOWER Bound of your random number you generated : ";
    cin >> lb;
    cout << "Enter the UPPER Bound of your random number you generated : ";
    cin >> ub;
    
    cout << "Here is your "<< N << " random number U(0,1) that you want to generate. \n";
 for (i=0;i<N;i++)
 {
   data[i] = Uniform(lb,ub);
   cout << data[i] <<endl;
 }
 average = MeanData(data,N);
 variance = VarData(data,average,N);
 cout<<"\n\n The average of "<<N<<" data beween "<<lb<<" and "<<ub<<" is "<<average<<"\n";
 cout<<"\n\n and the variance is "<<variance;
}
