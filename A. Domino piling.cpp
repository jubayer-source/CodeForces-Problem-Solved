#include <iostream>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    // Calculate the maximum number of dominoes
    int maxDominoes = (M * N) / 2;

    // Output the result
    cout << maxDominoes << endl;

    return 0;
}
