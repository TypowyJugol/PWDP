#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;
void krzyzk_pozycja(int z)
{
    if (z == 1)
    {
        cout << "\x1b[11;7H";
        cout << "\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B";
        cout << "\x1b[18;7H";
        cout << "\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A";
        cout << "\x1b[32E";
    }
    if (z == 2)
    {
        cout << "\x1b[11;27H";
        cout << "\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B";
        cout << "\x1b[18;27H";
        cout << "\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A";
        cout << "\x1b[32E";
    }
    if (z == 3)
    {
        cout << "\x1b[11;47H";
        cout << "\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B";
        cout << "\x1b[18;47H";
        cout << "\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A";
        cout << "\x1b[32E";
    }
    if (z == 4)
    {
        cout << "\x1b[22;7H";
        cout << "\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B";
        cout << "\x1b[29;7H";
        cout << "\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A";
        cout << "\x1b[21E";
    }
    if (z == 5)
    {
        cout << "\x1b[22;27H";
        cout << "\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B";
        cout << "\x1b[29;27H";
        cout << "\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A";
        cout << "\x1b[21E";
    }
    if (z == 6)
    {
        cout << "\x1b[22;47H";
        cout << "\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B";
        cout << "\x1b[29;47H";
        cout << "\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A";
        cout << "\x1b[21E";
    }
    if (z == 7)
    {
        cout << "\x1b[33;7H";
        cout << "\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B";
        cout << "\x1b[40;7H";
        cout << "\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A";
        cout << "\x1b[10E";
    }
    if (z == 8)
    {
        cout << "\x1b[33;27H";
        cout << "\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B";
        cout << "\x1b[40;27H";
        cout << "\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A";
        cout << "\x1b[10E";
    }
    if (z == 9)
    {
        cout << "\x1b[33;47H";
        cout << "\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B";
        cout << "\x1b[40;47H";
        cout << "\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A";
        cout << "\x1b[10E";
    }
}

void kolko_pozycja(int z)
{
    if (z == 1)
    {
        cout << "\x1b[11;10H";
        cout << "\x1b[107m     \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m    \x1b[0m";
        cout << "\x1b[32E";
    }
    if (z == 2)
    {
        cout << "\x1b[11;30H";
        cout << "\x1b[107m     \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m    \x1b[0m";
        cout << "\x1b[32E";
    }
    if (z == 3)
    {
        cout << "\x1b[11;50H";
        cout << "\x1b[107m     \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m    \x1b[0m";
        cout << "\x1b[32E";
    }
    if (z == 4)
    {
        cout << "\x1b[22;10H";
        cout << "\x1b[107m     \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m    \x1b[0m";
        cout << "\x1b[32E";
    }
    if (z == 5)
    {
        cout << "\x1b[22;30H";
        cout << "\x1b[107m     \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m    \x1b[0m";
        cout << "\x1b[32E";
    }
    if (z == 6)
    {
        cout << "\x1b[22;50H";
        cout << "\x1b[107m     \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m    \x1b[0m";
        cout << "\x1b[32E";
    }
    if (z == 7)
    {
        cout << "\x1b[33;10H";
        cout << "\x1b[107m     \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m    \x1b[0m";
        cout << "\x1b[32E";
    }
    if (z == 8)
    {
        cout << "\x1b[33;30H";
        cout << "\x1b[107m     \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m    \x1b[0m";
        cout << "\x1b[32E";
    }
    if (z == 9)
    {
        cout << "\x1b[33;50H";
        cout << "\x1b[107m     \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[1D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[1B\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[2D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[1D\x1b[107m \x1b[0m\x1b[1A\x1b[107m \x1b[0m\x1b[1A\x1b[107m    \x1b[0m";
        cout << "\x1b[32E";
    }
}

int main()
{
    bool gra = true;
    while (gra == true)
    {
        cout << "\x1b[2;1H";
        cout << "\x1b[0J";
        srand(time(NULL));

        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "          *         \x1b[107m \x1b[0m       *****      \x1b[107m \x1b[0m      *******       " << endl;
        cout << "         **         \x1b[107m \x1b[0m      *     *     \x1b[107m \x1b[0m             *      " << endl;
        cout << "        * *         \x1b[107m \x1b[0m            *     \x1b[107m \x1b[0m             *      " << endl;
        cout << "       *  *         \x1b[107m \x1b[0m           *      \x1b[107m \x1b[0m      *******       " << endl;
        cout << "          *         \x1b[107m \x1b[0m          *       \x1b[107m \x1b[0m             *      " << endl;
        cout << "          *         \x1b[107m \x1b[0m        *         \x1b[107m \x1b[0m             *      " << endl;
        cout << "          *         \x1b[107m \x1b[0m       *          \x1b[107m \x1b[0m             *      " << endl;
        cout << "          *         \x1b[107m \x1b[0m      *******     \x1b[107m \x1b[0m      *******        " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "\x1b[107m                                                            \x1b[0m" << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "        *   *       \x1b[107m \x1b[0m     ********     \x1b[107m \x1b[0m       ********     " << endl;
        cout << "       *    *       \x1b[107m \x1b[0m     *            \x1b[107m \x1b[0m      *             " << endl;
        cout << "      *     *       \x1b[107m \x1b[0m     *            \x1b[107m \x1b[0m      *             " << endl;
        cout << "     *      *       \x1b[107m \x1b[0m     *******      \x1b[107m \x1b[0m      ********      " << endl;
        cout << "    *********       \x1b[107m \x1b[0m            *     \x1b[107m \x1b[0m      *       *     " << endl;
        cout << "            *       \x1b[107m \x1b[0m            *     \x1b[107m \x1b[0m      *       *     " << endl;
        cout << "            *       \x1b[107m \x1b[0m            *     \x1b[107m \x1b[0m      *       *     " << endl;
        cout << "            *       \x1b[107m \x1b[0m    ********      \x1b[107m \x1b[0m       *******      " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "\x1b[107m                                                            \x1b[0m" << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "     *********      \x1b[107m \x1b[0m      ******      \x1b[107m \x1b[0m       *******      " << endl;
        cout << "            *       \x1b[107m \x1b[0m     *      *     \x1b[107m \x1b[0m      *       *     " << endl;
        cout << "           *        \x1b[107m \x1b[0m     *      *     \x1b[107m \x1b[0m      *       *     " << endl;
        cout << "          *         \x1b[107m \x1b[0m      ******      \x1b[107m \x1b[0m       ********     " << endl;
        cout << "      *******       \x1b[107m \x1b[0m     *      *     \x1b[107m \x1b[0m              *     " << endl;
        cout << "        *           \x1b[107m \x1b[0m     *      *     \x1b[107m \x1b[0m              *     " << endl;
        cout << "       *            \x1b[107m \x1b[0m     *      *     \x1b[107m \x1b[0m              *     " << endl;
        cout << "      *             \x1b[107m \x1b[0m      ******      \x1b[107m \x1b[0m      ********      " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;

        cout << "Wybierając od 1-9 będziesz stawiał znak na podanych polach" << endl;
        cout << "Aby przejść dalej wpisz dowolną liczbę: ";
        int dalej;
        cin >> dalej;
        cout << "\x1b[2;1H";
        cout << "\x1b[0J";

        cout << "\x1b[48;2;0;102;0m   *   *  ******  *        *   *  ******      *      *   *  ******  *******  *     *  *******  *     *  *   *   \x1b[0m" << endl;
        cout << "\x1b[48;2;0;102;0m   *  *   *    *  *        *  *   *    *      *      *  *   *    *       *    *   *        *    *   *   *  *    \x1b[0m" << endl;
        cout << "\x1b[48;2;0;102;0m   * *    *    *  *        * *    *    *      *      * *    *    *      *      * *        *      * *    * *     \x1b[0m" << endl;
        cout << "\x1b[48;2;0;102;0m   **     *    *  *        **     *    *      *      **     ******     *        *        *        *     **      \x1b[0m" << endl;
        cout << "\x1b[48;2;0;102;0m   * *    *    *  *        * *    *    *      *      * *    * *       *         *       *         *     * *     \x1b[0m" << endl;
        cout << "\x1b[48;2;0;102;0m   *  *   *    *  *        *  *   *    *      *      *  *   *  *     *          *      *          *     *  *    \x1b[0m" << endl;
        cout << "\x1b[48;2;0;102;0m   *   *  ******  *******  *   *  ******      *      *   *  *   *   *******     *     *******     *     *   *   \x1b[0m" << endl;

        cout << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "\x1b[107m                                                            \x1b[0m" << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "\x1b[107m                                                            \x1b[0m" << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;
        cout << "                    \x1b[107m \x1b[0m                  \x1b[107m \x1b[0m                    " << endl;

        int tura = 1, gracz = 0, tabkolko[4] = {0, 0, 0, 0}, tabkrzyzyk[5] = {0, 0, 0, 0, 0}, ikol = 0, ikrz = 0, n = 0, ktowygral = 0, x, poprawna = true, koniec=false,

            wygrana[8][3] = {{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9},
                             {1, 4, 7},
                             {2, 5, 8},
                             {3, 6, 9},
                             {1, 5, 9},
                             {3, 5, 7}};

        while (tura < 10 && koniec == false)
        {
            if (gracz == 1)
            {
                while (poprawna == true)
                {
                    cout << "Podaj pole na którym chcesz umieścić znak: ";
                    cin >> x;
                    cout << "\x1b[1A\x1b[2K";
                    if (x != tabkolko[0] && x != tabkolko[1] && x != tabkolko[2] && x != tabkolko[3] && x != tabkrzyzyk[0] && x != tabkrzyzyk[1] && x != tabkrzyzyk[2] && x != tabkrzyzyk[3] && x != tabkrzyzyk[4])
                    {
                        tabkolko[ikol] = x;
                        kolko_pozycja(tabkolko[ikol]);
                        cout << "\x1b[2K";
                        ikol++;
                        poprawna = false;
                        for (int i = 0; i < 8; i++)
                        {
                            for (int k = 0; k < 3; k++)
                            {
                                for (int z = 0; z < 4; z++)
                                {
                                    if (wygrana[i][k] == tabkolko[z])
                                    {
                                        n++;
                                    }
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
                    }
                }
                poprawna = true;
                gracz = 0;
                if (ktowygral == 1)
                {
                    cout << "\x1b[43;1H";
                    cout << "Wygrał 'kółko'" << endl;
                    koniec=true;
                }
            }
            else
            {
                while (poprawna == true)
                {
                    x = (rand() % 9) + 1;
                    if (x != tabkolko[0] && x != tabkolko[1] && x != tabkolko[2] && x != tabkolko[3] && x != tabkrzyzyk[0] && x != tabkrzyzyk[1] && x != tabkrzyzyk[2] && x != tabkrzyzyk[3] && x != tabkrzyzyk[4])
                    {
                        tabkrzyzyk[ikrz] = x;
                        poprawna = false;
                        ikrz++;
                        krzyzk_pozycja(x);
                        for (int i = 0; i < 8; i++)
                        {
                            for (int k = 0; k < 3; k++)
                            {
                                for (int z = 0; z < 5; z++)
                                {
                                    if (wygrana[i][k] == tabkrzyzyk[z])
                                    {
                                        n++;
                                    }
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
                    }
                }
                poprawna = true;
                gracz = 1;
                if (ktowygral == 2)
                {
                    cout << "\x1b[43;1H";
                    cout << "wygrał 'krzyżyk'" << endl;
                    koniec=true;
                }
            }
            tura++;
        }
        

        if (ktowygral == 0)
        {
            cout << "\x1b[43;1H";
            cout << "Remis" << endl;
        }
        cout << "Chcesz zagrać jeszcze raz(1-Tak, 0-Nie)?" << endl;
        cin >> x;
        if (x == 1)
        {
            gra = true;
        }
        else
        {
            gra = false;
        }
    }

    return 0;
}