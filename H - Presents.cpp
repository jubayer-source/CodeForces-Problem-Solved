//https://codeforces.com/group/MWSDmqGsZm/contest/223206/problem/H
//H. Presents

#include <iostream>
    using namespace std;
     
    int main() {
        int n;
        cin >> n;
        
        int p[n], result[n];
        
        for (int i = 0; i < n; i++) {
            cin >> p[i];
            result[p[i] - 1] = i + 1;  // Store the giver in the recipient's position
        }
        
        for (int i = 0; i < n; i++) {
            cout << result[i] << " ";
        }
        
        return 0;
    }
