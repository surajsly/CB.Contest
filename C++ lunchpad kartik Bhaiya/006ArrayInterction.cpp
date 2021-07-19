// 006ArrayInterction.cpp

#include <iostream>
using namespace std;

int main()
{
    int a[100], b[100], c[100], n;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    int cth = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                cout << a[i];
                break;
            }
        }
    }

    for (int i = 0; i < cth; i++)
    {
        cout << c[cth] << ", ";
    }

    return 0;
}