//011 IsPalindrome.cpp

/*
Take as input N, a number. Take N more inputs and store that in an array. 
Write a recursive function which tests if the array is a palindrome and returns a Boolean value.
Print the value returned.

Input Format
Enter a number N , add N more numbers

Sample Input
4
1
2
2
1

Sample Output
true
*/

#include <iostream>
using namespace std;
int a[100];
bool ispalidrome(int start, int end)
{
    if (a[start] != a[end])
        return false;
    if (start == end)
        return true;
    ispalidrome(start + 1, end - 1);
    return true;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (ispalidrome(0, n - 1))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}