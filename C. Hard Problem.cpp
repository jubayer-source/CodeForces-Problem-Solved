#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int seated_row1 = min(m,a);
        int seated_row2 = min(m,b);

        int remaining_row1 = m - seated_row1;
        int remaining_row2 = m - seated_row2;

        int remaining_seats = remaining_row1 + remaining_row2;
        int seated_no_preparence = min(c, remaining_seats);

        long long total_seated = seated_row1 + seated_row2 + seated_no_preparence;

        cout << total_seated <<endl;
    }
return 0;
}
