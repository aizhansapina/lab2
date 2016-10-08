#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double V,R,r,h,l,S;
	cin>>R>>r>>h>>l;
	V=M_PI*h*(R*R+r*r+R*r)/3;
	l=sqrt(h*h+(R-r)*(R-r));
	S=M_PI*l*(R+r)+M_PI*(R*R+r*r);
	cout<<V<<endl;
	cout<<S<<endl;
	cout<<l<<endl;
return 0;
}
