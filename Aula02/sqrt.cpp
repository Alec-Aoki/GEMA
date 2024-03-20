#include <bits/stdc++.h>
using namespace std;

int quant_of_num;
float num, root;

int main (){

    cin >> quant_of_num;

    for (int i=1; i<=quant_of_num; i++){
        cin >> num;

        //root = sqrt(num);

        cout << fixed << showpoint;

        cout << setprecision(4) << sqrt(num) << endl;
    }

    return 0;
}