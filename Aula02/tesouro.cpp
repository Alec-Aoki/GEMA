#include <bits/stdc++.h>
using namespace std;

int string_size, x, y;

int main (){

    cin >> string_size >> x >> y;

    char string[string_size];

    for (int i=0; i<string_size; i++){
        cin >> string[i];

        if (string[i]=='C'){
            x--;
        }
        else if (string[i]=='B'){
            x++;
        }
        else if (string[i]=='D'){
            y++;
        }
        else if (string[i]=='E'){
            y--;
        }
    }

    cout << x << " " << y << endl;

    return 0;
}

// Input: size of string, xI, yI
// Input (loop): directions
// Output: xF, yF