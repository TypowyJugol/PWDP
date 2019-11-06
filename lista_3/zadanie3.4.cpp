#include <iostream>
using namespace std;
int dzialanie, x;
float l1, l2;
int main()
{
	while(x==0){
		cout<<"Podaj rodzaj dzialania: 1-dodawanie, 2-mnozenie: ";
		cin>>dzialanie;
		if(dzialanie==1)
		{
			cout<<"Wybrano dodawanie"<<endl;
		}
		else if(dzialanie==2)
		{
			cout<<"Wybrano mnozenie"<<endl;
		}
		else
		{
			cout<<"To nie jest liczba 1 lub 2"<<endl;
			break;
		}
		
		cout<<"Podaj pierwszą liczbę: ";
		cin>>l1;
		cout<<"Podaj drugą liczbę: ";
		cin>>l2;
		if(dzialanie==1)
		{
			cout<<"Wynik działania to: "<<l1+l2<<endl;
		}
		else
		{
			cout<<"Wynik działania to: "<<l1*l2<<endl;
		}
		cout<<"Czy chcesz kontynować obliczenia(Tak-0, Nie-1)?";
		cin>>x;
	}

	return 0;
}
