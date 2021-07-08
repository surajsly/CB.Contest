// 019CanYouReadThis.cpp

#include <iostream>
#include <String.h>
using namespace std;

int main()
{
    string s, word = "";
    cin >> s;
    word += s[0];
    int i = 1;
    while (i < s.length())
    {
        if (s.at(i) >= 'A' and s.at(i) <= 'Z')
        {
            cout << word << endl;
            word = "";
            word += s[i];
        }
        else
        {
            word += s[i];
        }
        i++;
    }
    cout << word << endl;
    return 0;
}