#include <iostream>
#include <cmath>
using namespace std;
int main ()
{	
	double a,b,c,Ma,Mb,Mc;
	cin>>a>>b>>c;
	Ma=sqrt(2*(pow(b,2)+pow(c,2))-pow(a,2))/2;
	Mb=sqrt(2*(a*a+c*c)-b*b)/2;
	Mc=sqrt(2*(a*a+b*b)-c*c)/2;
	cout<<Ma<<endl;
	cout<<Mb<<endl;
	cout<<Mc<<endl;
	return 0;
}
