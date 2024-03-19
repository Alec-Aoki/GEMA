#include <bits/stdc++.h>
using namespace std;

int weight;

int main (){

    cin >> weight;

    if (weight%2==0 and weight!=2){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}