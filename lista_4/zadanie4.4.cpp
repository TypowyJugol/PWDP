#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int losowa,koniec,liczba,proba=1,nowa,zakres=0;
int main(){
    srand(time(NULL));
    cout<<"\x1b[48;2;0;102;0m********    **********    *********    *********    *      *    *         *    **********    **      *    *    *    *********"<<endl;
    cout<<"      *     *             *       *    *       *     *    *     *         *    *        *    * *     *    *   *     *       *"<<endl;
    cout<<"     *      *             *       *    *       *       * *      *   ***   *    *        *    *  *    *    *  *      *       *"<<endl;
    cout<<"    *       *   ******    *********    *       *        *       *  *   *  *    **********    *   *   *    **        *********"<<endl;
    cout<<"   *        *        *    *       *    *       *        *       * *     * *    *        *    *    *  *    * *       *       *"<<endl;
    cout<<"  *         *        *    *       *    *       *        *       **       **    *        *    *     * *    *  *      *       *"<<endl;
    cout<<"********    **********    *       *    *********        *       *         *    *        *    *      **    *    *    *       *\x1b[0m"<<endl;      

    cout<<"Zgadnij liczbę z zakresu od 1 do 100"<<endl;
    losowa=(rand()%100)+1;
    koniec=true;
    while(koniec==true){
        cout<<"Podaj liczbę:";
        cin>>liczba;
        if(liczba==losowa){
            cout<<"Brawo, zgadłeś liczbę w "<<proba<<" próbach!!!"<<endl;
            cout<<"Czy chcesz zagrać jeszcze raz oraz zwiększyć zakres liczb o 10(0-Tak,1-Nie)?"<<endl;
            cin>>nowa;
            if(nowa==0){
                zakres++;
                losowa=(rand()%100+zakres)+1;
            }
            else{
                koniec=false;
            }
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