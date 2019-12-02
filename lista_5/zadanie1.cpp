#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand(time(NULL));
    int tura = 1, gracz, tabkolko[3], tabkrzyzyk[3], losuj=true, ikol = 0, ikrz=0, n = 0, ktowygral, x, 

              wygrana[8][3] = {{1, 2, 3},
                               {4, 5, 6},
                               {7, 8, 9},
                               {1, 4, 7},
                               {2, 5, 8},
                               {3, 6, 9},
                               {1, 5, 9},
                               {3, 5, 7}};

    cout<<"\x1b[48;2;0;102;0m   *   *  ******  *        *   *  ******      *      *   *  ******  *     *  *******  *     *  *   *         \x1b[0m"<<endl;
    cout<<"\x1b[48;2;0;102;0m   *  *   *    *  *        *  *   *    *      *      *  *   *    *   *   *        *    *   *   *  *          \x1b[0m"<<endl;
    cout<<"\x1b[48;2;0;102;0m   * *    *    *  *        * *    *    *      *      * *    *    *    * *        *      * *    * *           \x1b[0m"<<endl;
    cout<<"\x1b[48;2;0;102;0m   **     *    *  *        **     *    *      *      **     ******     *        *        *     **            \x1b[0m"<<endl;
    cout<<"\x1b[48;2;0;102;0m   * *    *    *  *        * *    *    *      *      * *    * *        *       *         *     * *           \x1b[0m"<<endl;
    cout<<"\x1b[48;2;0;102;0m   *  *   *    *  *        *  *   *    *      *      *  *   *  *       *      *          *     *  *          \x1b[0m"<<endl;
    cout<<"\x1b[48;2;0;102;0m   *   *  ******  *******  *   *  ******      *      *   *  *   *      *     *******     *     *   *         \x1b[0m"<<endl;

    cout << "Witaj w grze w kółko i krzyżyk" << endl;
    while (tura < 7)
    {
        if (gracz == 1)
        {
            cout << "Teraz kolej gracza 'kółko'" << endl;
            cout << "Podaj pole na którym chcesz umieścić znak" << endl;
            cout << "Pamiętaj, że możesz to zrobić tylko na wolnym polu: ";
            cin >> tabkolko[ikol];
            cout << endl;
            gracz = 0;
            ikol++;
        }
        else
        {
            cout << "Teraz kolej gracza 'krzyżyk'" << endl;
            while (losuj==true)
            {
                x = (rand() % 9) + 1;
                if (x != tabkolko[0] && x != tabkolko[1] && x != tabkolko[2] && x != tabkrzyzyk[0] && x != tabkrzyzyk[1] && x != tabkrzyzyk[2])
                {
                    cout << "Gracz 'krzyżyk' postawił znak na polu:"<<x<<endl;
                    tabkrzyzyk[ikrz] = x;
                    losuj=false;
                    ikrz++;
                }
            }
            losuj=true;
            gracz = 1;
        }
        tura++;
    }

    sort(tabkolko, tabkolko + 3);
    sort(tabkrzyzyk, tabkrzyzyk + 3);

    for (int i = 0; i < 8; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            if (wygrana[i][k] == tabkolko[k])
            {
                n++;
            }
        }
        if (n == 3)
        {
            ktowygral = 1;
            n = 0;
            break;
        }
        else
        {
            n = 0;
        }
    }

    for (int i = 0; i < 8; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            if (wygrana[i][k] == tabkrzyzyk[k])
            {
                n++;
            }
        }
        if (n == 3)
        {
            ktowygral = 2;
            n = 0;
            break;
        }
        else
        {
            n = 0;
        }
    }

    if (ktowygral == 1)
    {
        cout << "Wygrał 'kółko'" << endl;
    }
    else if (ktowygral == 2)
    {
        cout << "wygrał 'krzyżyk'" << endl;
    }
    else
    {
        cout << "Nikt nie wygrał" << endl;
    }

    return 0;
}