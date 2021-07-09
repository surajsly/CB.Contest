// 002MinMaxInArray.cpp

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, a[100];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int MAXI = INT_MIN, MINI = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > MAXI)
        {
            MAXI = a[i];
        }
        if (a[i] < MINI)
        {
            MINI = a[i];
        }
    }
    cout << MINI << " " << MAXI;
    return 0;
}