// 015binarytodecimal.cpp
/*
Take N (number in binary format). 
Write a function that converts it to decimal format and Print the value returned.

Input Format

Constraints
0 < N <= 1000000000

Output Format

Sample Input
101010

Sample Output
42

Explanation
For binary number fedcba , Decimal number = f * 25 + e * 24 + d * 23 + …..+ a * 20.
*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int decimal = 0;
    int exp = 0;
    while (n > 0)
    {
        int d = n % 10;
        decimal = decimal + d * pow(2, exp);
        exp++;
        n /= 10;
    }
    cout << decimal;
    return 0;
}