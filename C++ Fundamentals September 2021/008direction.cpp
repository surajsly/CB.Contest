// direction.cpp

#include <iostream>
using namespace std;

int main()
{
    char ch;
    ch = cin.get();
    int x = 0, y = 0;
    while (ch != ' ')
    {
        if (ch == 'N')
        {
            y++;
        }
        else if (ch == 'S')
        {
            y--;
        }
        else if (ch == 'W')
        {
            x--;
        }
        else if (ch == 'E')
        {
            x++;
        }
        ch = cin.get();
    }
    // AT ORIGIN
    if (x == 0 and y == 0)
    {
        cout << "RIGHT PLACE";
    }
    // FIRST QUADRENT
    else if (x >= 0 and y >= 0)
    {
        while (x > 0)
        {
            x--;
            cout << "E";
        }
        while (y > 0)
        {
            y--;
            cout << "N";
        }
    }
    // SECOND QUADRENT
    else if (x <= 0 and y >= 0)
    {
        while (y > 0)
        {
            y--;
            cout << "N";
        }
        while (x < 0)
        {
            x++;
            cout << "W";
        }
    }
    // THIRD QUADRENT
    else if (x <= 0 and y <= 0)
    {
        while (y < 0)
        {
            y++;
            cout << "S";
        }
        while (x < 0)
        {
            x++;
            cout << "W";
        }
    }
    // FOURTH QUADRENT
    else if (x >= 0 and y <= 0)
    {

        while (x > 0)
        {
            x--;
            cout << "E";
        }
        while (y < 0)
        {
            y++;
            cout << "S";
        }
    }

    return 0;
}