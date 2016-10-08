#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double a,b,c,r,p;
	cin>>a>>c;
	p=(a+b+c)/2;
	b=sqrt(pow(c,2)-pow(a,2));
	r=sqrt((p-a)*(p-b)*(p-c)/p);
	cout<<b<<endl;
	cout<<r<<endl;
	return 0;
}
