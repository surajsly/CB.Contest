// 014PythagorasTriplet.cpp

// NOT COMPLETED YET

/*
How to Form a Pythagorean Triplet

If the number is odd: 

* Square the number N and then divide it by 2. Take the integer that is 
immediately before and after that number i.e. (N^2/2 -0.5) and (N^2/2 +0.5).
Pythagorean triplet= N, (N^2/2 -0.5), (N^2/2 +0.5)
Example: Take number N=3.
On squaring the number, we get 9.
Now take the half of it. 9/2= 4.5
The integer immediately before 4.5= 4; the integer immediately after 4.5= 5
Therefore, the triplet is 3, 4, 5.

* If the number is even: Take the half of that number N and then square it.
Pythagorean triplet= N, (N/2)^2-1, (N/2)^2+1
Example: Take number N=8
Half of N=4.
Pythagorean triplet= 8, (42-1), (42+1) i.e. 8, 15, 17
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    long long int N;
    cin >> N;
    if (N == 1 || N == 2)
    {
        cout << -1;
    }
    else if (N % 2 != 0)
    {
        cout << ((N * N) - 1) / 2 << " " << ((N * N) + 1) / 2;
    }
    else if (N % 2 == 0)
    {
        cout << ((N * N) - 4) / 4 << " " << ((N * N) + 4) / 4;
    }
}
