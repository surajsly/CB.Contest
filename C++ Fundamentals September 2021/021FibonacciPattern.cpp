// 021FibonacciPattern.cpp
/*
Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34
*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n >= 1)
    {
        cout << 0;
        cout << endl;
    }
    if (n >= 2)
    {
        cout << 1 << "\t" << 1;
        cout << endl;
    }
    int row = 3;
    int a = 1, b = 1, c = 2;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << c << "\t";
            col++;
            a = b;
            b = c;
            c = a + b;
        }
        cout << endl;
        row++;
    }

    return 0;
}