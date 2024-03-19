#include <bits/stdc++.h>
using namespace std;

int num_of_sections, x, y;

int main(){

    cin >> num_of_sections;

    for (int i=1; i<=num_of_sections; i++){
        cin >> x >> y;
    }

    if (num_of_sections>4){
        cout << (num_of_sections-4)/2 << endl;
    }
    else {
        cout << "0" << endl;
    }

    return 0;
}
