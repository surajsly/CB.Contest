// 005BubbleSort.cpp

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
    // Algo : Bubble Sort Start
    for (int i = 0; i <= n - 1; i++)
    {
        int maxindex = i;
        for (int j = 0; j <= n - i; j++)
        {
            if (a[j] > a[maxindex])
            {
                swap(a[j], a[maxindex]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}