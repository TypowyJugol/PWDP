#include<iostream>
using namespace std;
int main()
{
	int y=1;
	for(int i=1;i<13;i++)	//największa poprawna wartośc to !12
	{
	y=y*i;
	}
	cout<<y<<endl;
	return 0;
}
