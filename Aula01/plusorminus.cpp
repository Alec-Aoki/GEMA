#include <bits/stdc++.h>
using namespace std;

int a, b, c, numOfTests;

int main (){

    cin >> numOfTests;

    for (int i=1; i<=numOfTests; i++){

        cin >> a >> b >> c;

        if ((a+b)==c and (a-b)!=c){
            cout << "+" << endl;
        }
        else if ((a+b)!=c and (a-b)==c){
            cout << "-" << endl;
        }
        else {
            cout << "-" << endl;
        }
    }

    return 0;
}