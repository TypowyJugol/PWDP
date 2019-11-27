#include<iostream>
using namespace std;

int fib(int n)
{
	if(n==0)
    {
		return 0;
    }
    else if(n==1)
    {
        return 1;
    }
	else
    {
        return fib(n-2)+fib(n-1);
    }
}

int main()
{
	int n;
	cout<<"Podaj wyrazu ciągu: ";
	cin>>n;
	cout<<"Podany wyraz ciągu ma wartość "<<fib(n)<<endl;
    for (n=1;n<10;n++)
    {
        cout<<n<<"  "<<fib(n);
    }
	return 0;
}
