#include <bits/stdc++.h>
using namespace std;

int num;

int main(){

    cin >> num;
    
    for (int i=1; i<=num; i++){
        if (num%(i)==0){
            cout << i << " ";
        }
        else {
            continue;
        }
    }

    return 0;
}