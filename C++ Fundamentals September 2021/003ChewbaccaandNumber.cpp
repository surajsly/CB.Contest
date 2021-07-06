//003ChewbaccaandNumber.cpp

// INCOMPLETE

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long unsigned int n;
    cin >> n;
    long long unsigned int temp = n;
    long long unsigned int sum = 0;
    int cnt = 0;
    while (temp > 0)
    {
        int d = temp % 10;
        if (d == 0 or d == 9)
        {
            temp = temp / 10;
            continue;
        }
        if (9 - d < d)
        {
            sum = sum * 10 + (9 - d);
        }
        else
        {
            sum = sum * 10 + d;
        }

        temp /= 10;
    }
    int final = 0;

    while (sum > 0)
    {
        int d = sum % 10;
        if (d == 0)
        {
            final = final * 10;
        }
        final = final * 10 + d;

        sum /= 10;
    }
    cout << final;
    return 0;
}