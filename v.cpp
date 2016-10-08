#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double a,b,c,Ha,Hb,Hc,S,p;
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	Ha=2*S/a;
	Hb=2*S/b;
	Hc=2*S/c;
	cout<<Ha<<endl;
	cout<<Hb<<endl;
	cout<<Hc<<endl;
	return 0;
}



