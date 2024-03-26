#include <bits/stdc++.h>
using namespace std;

int quant_of_nums, cont_main, cont_sup;

int main (){

    cin >> quant_of_nums;

    int sequence[quant_of_nums];

    cin >> sequence[0];

    for (int i=1; i<quant_of_nums; i++){
        cin >> sequence[i];

        if (sequence[i]==sequence[i-1]){
            cont_main++;
        }
        else /*(sequence[i]!=sequence[i-1])*/ { 
            if (cont_main>=cont_sup){
                cont_sup = cont_main;
            }
            cont_main = 1;
        }
    }

    if (cont_main>cont_sup){
        cout << cont_main;
    }
    else {
        cout << cont_sup;
    }


    return 0;

}