// 001linearSearch.cpp

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
    int key;
    cin >> key;
    for (int i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            cout << key << " at " << i << " th index" << endl;
            return 0;
        }
    }
    cout << "Not Found";

    return 0;
}