#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double A,B,T,G;
	cin>>A>>B;
	T=(A+B)/2;
	G=sqrt(A*B);
	cout<<"arithmetic mean:"<<T<<endl;
	cout<<"geometric mean:"<<G<<endl;
	return 0;
}
