// 002CountingSort.cpp

#include <iostream>
#include <climits>
using namespace std;

void InOutArray(int a[], int n, bool IN = false)
{
    if (IN == true)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
    }
}

int findMax(int a[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > maxi)
        {
            maxi = a[i];
        }
    }
    return maxi;
}

void CountSort(int a[], int n)
{
    int maxElemet = findMax(a, n);
    int countArray[100000] = {0};

    // Counting Each elemet accorence
    for (int i = 0; i < n; i++)
    {
        countArray[a[i]]++;
    }

    // finding cummulative sum
    for (int i = 1; i <= maxElemet; i++)
    {
        countArray[i] += countArray[i - 1];
    }

    // outpt array
    int output[100000];
    for (int i = n - 1; i >= 0; i--)
    {
        output[--countArray[a[i]]] = a[i];
    }

    InOutArray(output, n);
}

int main()
{
    int n;
    cin >> n;
    int a[100000];
    InOutArray(a, n, true);
    CountSort(a, n);
    return 0;
}