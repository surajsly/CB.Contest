// 022StringCompression.cpp
/*
Take as input S, a string. Write a function that does basic string 
compression. Print the value returned. 
E.g. for input “aaabbccds” print out a3b2c2d1s1.
*/
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    char c = s[0];
    int clen = 1;
    int cnt = 1;
    cout << c;
    while (clen < s.length())
    {
        if (c == s[clen])
        {
            cnt++;
        }
        else
        {
            cout << cnt;
            c = s[clen];
            cout << c;
            cnt = 1;
        }
        clen++;
    }
    cout << cnt;
    return 0;
}