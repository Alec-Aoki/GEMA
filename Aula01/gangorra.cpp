#include <bits/stdc++.h>
using namespace std;

int p1, c1, p2, c2;

int main (){

    cin >> p1 >> c1 >> p2 >> c2;

    if (p1*c1==p2*c2){
        cout << "0" << endl;
    }
    else if (p1*c1<p2*c2){
        cout << "1" << endl;
    }
    else { //p1*c1>p2*c2
        cout << "-1" << endl;
    }

    return 0;
}