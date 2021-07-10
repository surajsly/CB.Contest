//  006InsertionSort.cpp

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
    // Algo : Insertion sort Start
    for (int i = 1; i <= n - 1; i++)
    {
        int e = a[i];
        int j = i - 1;
        while (j >= 0 and a[j] > e)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = e;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}