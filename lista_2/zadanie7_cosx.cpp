#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	double x, wynik_cos, k_cos;
	for(x=0; x<=2*M_PI; x=x+0.0001)
	{
	wynik_cos=cos(x);
	k_cos=wynik_cos*wynik_cos;
	cout<<x;
	cout<<"	";
	cout<<wynik_cos;
	cout<<"	";
	cout<<k_cos<<endl;
	}
	return 0;
}
