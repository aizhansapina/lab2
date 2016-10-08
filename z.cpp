#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double a,b,c,La,Lb,Lc;
	cin>>a>>b>>c;
	La=sqrt(b*c*((b+c)*(b+c)-a*a))/(b+c);
	Lb=a*sqrt(2*c/(a+c));
	Lc=sqrt(2)*a*b/(a+b);
	cout<<La<<endl;
	cout<<Lb<<endl;
	cout<<Lc<<endl;
	return 0;
}
