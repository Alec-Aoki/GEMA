#include <bits/stdc++.h>
using namespace std;

int iA, iB, fA, fB;

// If iA != fA and iB != fB, then C2 x1
// If iA != fA and iB == fB, then C1 X1
// If iA == fA and iB != fB, then C1 x1, C2 x2
// If iA == fA and iB == fB, then 0

int main(){

    cin >> iA >> iB >> fA >> fB;

    if (iA != fA){
        cout << "1" << endl;
    }
    else if (iA == fA && iB != fB){
        cout << "2" << endl;
    }
    else {
        cout << "0" << endl;
    }

    return 0;
}