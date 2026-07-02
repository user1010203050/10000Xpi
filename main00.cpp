#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int n;
cout<<"Enetr The number (in 0 to 30):";
cin>>n;

long double Bin[30],power7000[30],power2801[30],power16[30],Sum;
Sum=30801;
Bin[0]=1;
power7000[0]=7000;
power2801[0]=2801;
power16[0]=1;
cout<<setprecision(50);
cout<<"pi_0="<<Sum/10000.0<<endl;
for(int k=1;k<=n;k++)
{
Bin[k]=(2.0*(2.0*k-1.0)*Bin[k-1])/k;
power7000[k]=power7000[k-1]*7000*7000;
power2801[k]=power2801[k-1]*2801*2801;
power16[k]=power16[k-1]*1600000000;
Sum=Sum+Bin[k]*(4*power7000[k]+power2801[k])/((2*k+1)*power16[k]);
cout<<"pi_"<<k<<"="<<Sum/10000.0<<endl;
}
return 0;
}
