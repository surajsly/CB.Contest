// 010PatternMountain.cpp
/*
Take N (number of rows), print the following pattern (for N = 4).

                       1           1
                       1 2       2 1  
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1   
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        int val = 1;
        for (int col = 1; col <= row; col++)
        {
            cout << val << "\t";
            val++;
        }
        for (int csp = 1; csp <= 2 * (n - row) - 1; csp++)
        {
            cout << "\t";
        }

        val = row;
        for (int col = 1; col <= row; col++)
        {
            if (row == n and col == 1)
            {
                val--;
                continue;
            }
            cout << val << "\t";
            val--;
        }
        cout << endl;
    }

    return 0;
}