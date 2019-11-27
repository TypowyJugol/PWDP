#include <iostream>
using namespace std;
int main()
{
    int pole, tura = 1, gracz, tabkolko[3], tabkrzyzyk[3], ikrz=0, ikol=0;
    cout << "Witaj w grze w kółko i krzyżyk" << endl;
    while (tura < 7)
    {
        if (gracz == 1)
        {
            cout << "Teraz kolej gracza 'kółko'" << endl;
            cout << "Podaj pole na którym chcesz umieścić znak" << endl;
            cout << "Pamiętaj, że możesz to zrobić tylko na wolnym polu" <<endl;
            cin >> tabkolko[ikol];
            gracz=0;
            ikol++;
        }
        else
        {
            cout << "Teraz kolej gracza 'krzyżyk'" << endl;
            cout << "Podaj pole na którym chcesz umieścić znak" << endl;
            cout << "Pamiętaj, że możesz to zrobić tylko na wolnym polu" <<endl;
            cin >> tabkrzyzyk[ikrz];
            gracz=1;
            ikrz++;
        }
        tura++;
    }
    for ()
    return 0;
}