#include <bits/stdc++.h>
using namespace std;

int num=-1, maior_num;

int main (){

    while (num!=0){
        cin >> num;

        if (num>maior_num){
            maior_num = num;
        }
        
    }

    cout << maior_num << endl;

    return 0;
}