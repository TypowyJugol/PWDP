#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    srand(time(NULL));
    int tablica1[3] = {1, 2, 3}, tablica2[3] = {1, 2, 3}, tablica3[3] = {2, 3, 1}, n = 0, x, testab[3], i = 0,
        wielo[3][3] = {{1, 2, 3},
                       {1, 4, 7},
                       {1, 5, 9}};

    while (i < 3)
    {
        x = (rand() % 9) + 1;
        cout<<x<<endl;
        if (x != tablica1[0] && x != tablica1[1] && x != tablica1[2] && x != testab[0] && x != testab[1] && x != testab[2])
        {
            testab[i] = x;
            i++;
        }
    }

    for (i = 0; i < 3; i++)
    {
        cout << testab[i] << " ";
    }

    return 0;
}