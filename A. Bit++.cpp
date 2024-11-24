#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int x = 0; // Initialize the variable x to 0

    for (int i = 0; i < n; i++) {
        string statement;
        cin >> statement;

        if (statement.find("++") != string::npos) {
            x++; // Increment x if "++" is found
        } else if (statement.find("--") != string::npos) {
            x--; // Decrement x if "--" is found
        }
    }

    cout << x << endl; // Print the final value of x after processing all statements

    return 0;
}
