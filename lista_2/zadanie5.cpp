#include <iostream>
using namespace std;
int main()
{
	int i;
	for(i=1; i<=107; i++)
    	{
        cout<<"KOD:";
	cout<<i;
	cout<<"m ";
	cout<<"\x1b[";
	cout<<i;
	cout<<"m";
	cout<<"efekt";
	cout<<"\x1b[0m"<<endl;
    	}
	return 0;
}
