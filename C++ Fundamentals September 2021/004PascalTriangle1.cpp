//004PascalTriangle1.cpp

/*
           1
         1   1
       1   2   1
     1   3   3   1
*/

#include <iostream>
using namespace std;

int facto(int n)
{
    int f = 1;
    if (n == 0 or n == 1)
    {
        return 1;
    }
    for (int i = n; i >= 2; i--)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int n;
    cin >> n;
    for (int row = 1; row <= n; row++)
    {
        for (int csp = 1; csp <= n - row; csp++)
        {
            cout << " ";
        }
        for (int col = 1; col <= row; col++)
        {
            int N = row - 1;
            int R = col - 1;
            int toprint = facto(N) / (facto(R) * facto(N - R));
            cout << toprint;
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}