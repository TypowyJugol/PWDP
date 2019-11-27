#include<iostream>
using namespace std;

int main()
{
	int x=1, i;
    for (i=1;i<15;i++)
    {
        cout<<i<<"  "<<i+x<<endl;
        x=x*2;
    }
	return 0;
}
