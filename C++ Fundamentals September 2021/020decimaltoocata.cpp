// 020decimaltoocata.cpp

#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

int main()
{
    long long int oct;
    cin >> oct;
    long long int total = 0;

    long long int n = 0;

    while (oct != 0)
    {
        int d = oct % 8;
        total += (pow(10, n)) * d;
        n++;
        oct = oct / 8;
    }

    cout << total;

    return 0;
}