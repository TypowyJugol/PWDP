#include <iostream>
using namespace std;

void Hello(){
    cout<<"Hello World!"<<endl;
}
float druga(float a){
    cout<<a<<endl;

}
int trzecia(int x, int y){
    cout<<x+y<<endl;
}
int czwarta(int x, float y, float z){
    return x*y*z;
}
int piata(int tablica[], int rozmiar){
    int iloczyn=1,i;
    for(i=0;i<rozmiar;i++){
        iloczyn*=tablica[i];
    }
    return iloczyn;
}
int main(){
    int tablica[5]={1,2,3,4,5};
    Hello();
    druga(5.25);
    trzecia(5,3);
    czwarta(5,2.25,3.45);
    piata(tablica, 5);
    return 0;
}