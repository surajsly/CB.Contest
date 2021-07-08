// 017PatternTriangle.cpp

/*
Take N (number of rows), print the following pattern (for N = 4).

                       1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {

        for (int csp = 1; csp <= n - row; csp++)
        {
            cout << "\t";
        }
        int val = row;
        for (int col = 1; col <= row; col++)
        {
            cout << val << "\t";
            val++;
        }
        val = val - 2;
        for (int col = 1; col <= row - 1; col++)
        {
            cout << val << "\t";
            val--;
        }
        cout << endl;
    }
    return 0;
}