//ManmohanLovesPatterns1.cpp

/*
Given N, help Manmohan to print pattern upto N lines. For eg For N=6 , following pattern will be printed.
1
11
111
1001
11111
100001
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        if (row % 2 == 0)
        {
            for (int col = 1; col <= row; col++)
            {
                if (col == 1 or col == row)
                {
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
        }
        else
        {
            for (int col = 1; col <= row; col++)
            {
                cout << 1;
            }
        }
        cout << endl;
    }
    return 0;
}