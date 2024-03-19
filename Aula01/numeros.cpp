#include <bits/stdc++.h>
using namespace std;

int n, k;

// Meh

int main(){

    cin >> n >> k;

    if (n>=k){
        cout << (n/k)*k + k << endl;
    }
    else {
        cout << k << endl;
    }

    return 0;
}