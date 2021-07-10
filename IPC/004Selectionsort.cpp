// 004Selectionsort.cpp

#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // starting sorting
    for (int i = 0; i < n - 1; i++)
    {

        int minindex = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (a[j] < a[minindex])
            {
                minindex = j;
            }
        }
        swap(a[minindex], a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}