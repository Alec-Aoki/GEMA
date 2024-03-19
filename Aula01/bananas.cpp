#include <bits/stdc++.h>
using namespace std;

int nOfBanWanted, priceOfBan, DolHad, priceTot;

int main(){

    cin >> priceOfBan >> DolHad >> nOfBanWanted;

    for (int i=1; i<=nOfBanWanted; i++){
        priceTot = priceTot + i*priceOfBan;
    }

    if (priceTot < DolHad){
        cout << "0" << endl;
    }
    else{
        cout << priceTot - DolHad << endl;
    }
    return 0;
}