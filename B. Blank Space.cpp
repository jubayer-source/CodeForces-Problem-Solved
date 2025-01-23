#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }


        int longestZeroBlank = 0;
        int currentZeroBlank = 0;

        for(int i = 0; i < n; i++){
            if(a[i] == 0)
            {
                currentZeroBlank++;
                longestZeroBlank = max(longestZeroBlank,currentZeroBlank);
            }
            else currentZeroBlank = 0;
        }


        cout << longestZeroBlank << endl;
    }
    return 0;
}
