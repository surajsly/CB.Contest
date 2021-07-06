/*
 
 1******
 12*****
 123****
 1234***
 12345**
 123456*
 1234567

*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int val = 1;
        int col = 1;
        while (col <= i)
        {
            cout << val;
            val++;
            col++;
        }
        col = 1;
        while (col <= n - i)
        {
            cout << "*";
            col++;
        }
        cout << endl;
    }
    return 0;
}