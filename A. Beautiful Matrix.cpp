#include <bits/stdc++.h>
using namespace std;

int main() {
    int matrix[5][5];

    // Read the 5 x 5 matrix and locate the position of '1'
    int x, y;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                x = i + 1; // Convert to 1-based index
                y = j + 1; // Convert to 1-based index
            }
        }
    }

    // Calculate the Manhattan distance to the center (3, 3)
    int moves = abs(3 - x) + abs(3 - y);

    // Output the result
    cout << moves << endl;

    return 0;
}
