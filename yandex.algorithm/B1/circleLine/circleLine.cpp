#include <iostream>

using namespace std;

int main(){
    short numberStations, numberHomeStation, numberWorkStation;
    cin >> numberStations;
    cin >> numberHomeStation;
    cin >> numberWorkStation;


    if(abs(numberHomeStation - numberWorkStation) <= numberStations / 2){
        cout << abs(numberHomeStation - numberWorkStation) - 1;
    }
    else{
        if(numberHomeStation < numberWorkStation)
            cout << (numberStations - numberWorkStation) + numberHomeStation - 1;
        else
            cout << (numberStations - numberHomeStation) + numberWorkStation - 1;
    }
    return 0;
}