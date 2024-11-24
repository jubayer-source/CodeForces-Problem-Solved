#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;

    for( int i = 0; i < n; i++)
    {
        int p, v, t;
        cin >> p >> v >> t;

        if( p + v + t >= 2) // Check if at least two friends are sure, then implement;
        {
            count++;
        }
    }

    cout << count <<endl;



    return 0;
}
