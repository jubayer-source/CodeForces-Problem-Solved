#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin >> word;

    // capitalize the first letter if it is lowercase
    if( word[0] >= 'a' && word[0] <= 'z'){
        word[0] = word[0] - ( 'a' - 'A'); // covert to uppercase
    }

    // another ways using STL
          // word[0] = toupper(word[0]);

    // is uppercase ?
           // char c = 'A';
           // if( isupper(c)) {
               // cout << "It's uppercase!" <<endl;
        // }
    cout << word << endl;
    return 0;
}
