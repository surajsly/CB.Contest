//005GaneshasPattern.cpp
/*
Take as input N, an odd number (>=5) . Print the following pattern as given below for N = 7.

*  ****
*  *
*  *
*******
   *  *
   *  *
****  *
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n / 2; row++)
    {
        int col = 1;
        while (col <= n)
        {
            if (col == 1)
            {
                cout << "*";
                col++;
                continue;
            }
            if (col > 1 and col <= (n / 2))
            {
                cout << " ";
                col++;
                continue;
            }
            if (col == (n / 2) + 1)
            {
                cout << "*";
                col++;
                continue;
            }
            if (row == 1)
            {
                cout << "*";
                col++;
                continue;
            }
            col++;
        }
        cout << endl;
    }
    for (int col = 1; col <= n; col++)
    {
        cout << "*";
    }
    cout << endl;
    for (int row = 1; row <= n / 2; row++)
    {
        int col = 1;
        while (col <= n)
        {

            
            if (col == (n / 2) + 1)
            {
                cout << "*";
                col++;
                continue;
            }
            if (col > (n / 2) + 1 and col < (n))
            {
                cout << " ";
                col++;
                continue;
            }
            if (row == n / 2)
            {
                cout << "*";
                col++;
                continue;
            }

            if (col == n)
            {
                cout << "*";
                col++;
                continue;
            }
            cout << " ";
            col++;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}