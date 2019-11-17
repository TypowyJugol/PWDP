#include <iostream>
using namespace std;
int losowa,koniec,liczba,proba=1;
int main(){
    srand(time(NULL));
    cout<<"Zgadnij liczbę z zakresu od 1 do 100"<<endl;
    losowa=(rand()%100)+1;
    koniec=true;
    while(koniec==true){
        cout<<"Podaj liczbę:";
        cin>>liczba;
        if(liczba==losowa){
            cout<<"Brawo, zgadłeś liczbę w "<<proba<<" próbach!!!"<<endl;
            koniec=false;
        }
        else if(liczba<losowa){
            cout<<"Liczba za mała"<<endl;
        }
        else{
            cout<<"Liczba za duża"<<endl;
        }
        proba++;
    }
    return 0;
}