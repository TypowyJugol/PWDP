#include <iostream>
using namespace std;
float readHeight(){
    float wzrost;
    cout<<"Podaj swój wzorst: ";
    cin>>wzrost;
    return wzrost;
}
int readMass(){
    int masa;
    cout<<"Podaj swoją masę: ";
    cin>>masa;
    return masa;
}
float BMI(int wzrost,float masa){
    return masa/(wzrost^2);
}
float BMIprint(float BMI){
    cout<<"Twój wskaźnik BMI to: "<<BMI<<endl;
}
int main(){
    BMIprint(BMI(readHeight(), readMass()));
    return 0;
}