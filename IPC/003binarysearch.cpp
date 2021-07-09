// 003binarysearch.cpp

#include <iostream>
using namespace std;

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10;
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int key;
    cin >> key;
    while (mid != key and start <= end)
    {
        if (a[mid] == key)
        {
            cout << "fount at : " << mid;
            return 0;
        }
        if (key > mid)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    cout << "Not Found";
    return 0;
}