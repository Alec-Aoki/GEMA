#include <bits/stdc++.h>
using namespace std;

int rating, num_of_tests;

int main(){

    cin >> num_of_tests;

    for (int i=1; i<=num_of_tests; i++){
        cin >> rating;

        if (rating>=1900){
            cout << "Division 1" << endl;
        }

        else if (rating>=1600 and rating<=1899){
            cout << "Division 2" << endl;
        }
        else if(rating>=1400 and rating<=1599){
            cout << "Division 3" << endl;
        }
        else {
            cout << "Division 4" << endl;
        }
    }    

    return 0;
}