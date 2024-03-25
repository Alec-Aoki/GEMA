#include <bits/stdc++.h>
using namespace std;

int quant_of_nums, points, temp_points, final_points;

int main (){

    //TERMINAR

    cin >> quant_of_nums;

    int sequence[quant_of_nums];

    cin >> sequence[0];

    for (int i=1; i<quant_of_nums; i++){
        cin >> sequence[i];

        if (sequence[i]==sequence[i-1]){
            points++;
        }
        else {
            temp_points = points;
            points = 1;
                if (temp_points>final_points){
                    final_points = temp_points;
                }
        }
    }

    if (points>final_points){
        cout << points << endl;
    }
    else {
        cout << final_points << endl;
    }

    return 0;
}