#include<iostream>
using namespace std;
int main()
{
	for(int y=10;y<=200;y=y+5)
	{	
		for(int i=10;i<=200;i=i+5)
		{
		cout<<"\x1b[48;2;"<<y<<";"<<i<<";70m \x1b[0m";
		}	
	cout<<endl;
	}	
	return 0;
}
