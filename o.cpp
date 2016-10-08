#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double R0,R1,R2,R3;
	cin>>R1>>R2>>R3;
	R0=1/(1/R1+1/R2+1/R3);
	cout<<R0<<endl;
	return 0;
}
