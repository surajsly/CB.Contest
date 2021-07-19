/* Take as input N, a number. Take N more inputs and store that in an array. 
Write a recursive function which reverses the array. Print the values of reversed array.

Input Format
Enter a number N and take N more inputs

constraints
None

Output Format
Display values of the reversed array

Sample Input
4
1
2
3
4
Sample Output
4 3 2 1

*/

#include <iostream>
using namespace std;

int a[100];

int reversePrint(int n)
{
    if (n < 0)
    {
        return -1;
    }
    cout << a[n] << " ";
    reversePrint(n - 1);
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    reversePrint(n - 1);
}