//006PatternNumbersStarts1.cpp

/*
1 2 3 4 5
1 2 3 4 * 
1 2 3 * * *
1 2 * * * * *
1 * * * * * * *
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
        for (int col = 1; col <= n - row + 1; col++)
        {
            cout << val << " ";
            val++;
        }
        if (row == 1)
        {
            cout << "\n";
            continue;
        }
        for (int col = 1; col <= 2 * (row - 1) - 1; col++)
        {
            cout << "*"
                 << " ";
        }
        cout << "\n";
    }
    return 0;
}