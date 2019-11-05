#include<iostream>
#include<unistd.h>
using namespace std;
int main()
{
	
	for(int x=10;x<=100;x=x+20)
	{
		for(int y=10;y<=200;y=y+10)
		{	
			for(int i=10;i<=200;i=i+10)
			{
			cout<<"\x1b[48;2;"<<y+x<<";"<<i+x<<";70m \x1b[0m";
			}	
		cout<<endl;
		usleep(100000);
		}
		cout<<"\x1b[20A";	
	}	
	return 0;
}
