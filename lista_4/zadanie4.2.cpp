#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
double s1,s2,s3,y1=0,y2=0,y3=0,y4=0;
int i;
int main(){
    srand(time(NULL));
    for (i=0;i<10;i++){
    s1=(double) rand()/ RAND_MAX;
    y1+=s1;
    }
    cout<<y1/10<<endl;
    for (i=0;i<100;i++){
    s2=(double) rand()/ RAND_MAX;
    y2+=s2;
    }
    cout<<y2/100<<endl;
    for (i=0;i<1000;i++){
    s3=(double) rand()/ RAND_MAX;
    y3+=s3;
    }
    cout<<y3/1000<<endl;
    return 0;
}