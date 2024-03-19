#include <bits/stdc++.h>
using namespace std;

long long int n;

int main (){

    cin >> n;

    if (n%2==0){
        cout << n/2 << endl;
    }
    else {
        cout << ((n-1)/2)+(-1)*n << endl;
    }

    return 0;

}