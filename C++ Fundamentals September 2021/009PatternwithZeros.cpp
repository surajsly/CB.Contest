// 009PatternwithZeros.cpp

/*
Take N (number of rows), print the following pattern (for N = 5)
1
2 2
3 0 3
4 0 0 4
5 0 0 0 5
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            if (col == 1 or col == row)
            {
                cout << row << "\t";
            }
            else
            {
                cout << "0"
                     << "\t";
            }
        }
        cout << endl;
    }
    return 0;
}