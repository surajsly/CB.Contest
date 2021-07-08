// 012HollowRhombusPattern.cpp

/*
Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.

Input Format
Single integer N.

Output Format
Print pattern.

Sample Input
5

Sample Output
    *****
   *   *
  *   *
 *   *
*****

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int csp = 1;
        while (csp <= n - row)
        {
            cout << " ";
            csp++;
        }
        int col = 1;
        if (row == 1 or row == n)
        {
            while (col <= n)
            {
                cout << "*";
                col++;
            }
        }
        else
        {
            while (col <= n)
            {
                if (col == 1 or col == n)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
                col++;
            }
        }
        cout << endl;
        row++;
    }
    return 0;
}