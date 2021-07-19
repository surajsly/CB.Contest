// 003twoarraysum.cpp

/*
Take as input N, the size of array. 
Take N more inputs and store that in an array. 
Take as input M, the size of second array and 
take M more inputs and store that in second array. 
Write a function that returns the sum of two arrays. 
Print the value returned.


Input Format
Constraints
Length of Array should be between 1 and 1000.

Output Format

Sample Input
4
1 0 2 9
5
3 4 5 6 7

Sample Output
3, 5, 5, 9, 6, END

*/

#include <iostream>
using namespace std;

void InOutArray(int a[], int n, bool IN = false)
{
    if (IN == true)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
}

int reversDigits(int num)
{
    int rev_num = 0;
    while (num > 0)
    {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int arraysum(int a[], int n)
{
    int arraySum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        arraySum = arraySum * 10 + a[i];
    }
    return arraySum;
}

int main()
{
    int a[100], b[100], n, m, asum = 0, bsum = 0, fsum = 0;
    cin >> n;
    InOutArray(a, n, true);
    cin >> m;
    InOutArray(b, m, true);
    asum = reversDigits(arraysum(a, n));
    bsum = reversDigits(arraysum(b, m));
    fsum = reversDigits(asum + bsum);
    while (fsum > 0)
    {
        cout << fsum % 10 << ", ";
        fsum /= 10;
    }
}