#include <iostream>
#include <cmath> 

using namespace std;

int main(){

    int length;
    int coordX, coordY;
    double lengthA, lengthB, lengthC;
    int numberDot;
    cin >> length;
    cin >> coordX;
    cin >> coordY;

    if( (coordX >= 0 && coordX <= length) && (coordY >= 0 && coordY <= length) && ((coordX + coordY - length) <= 0)) {
        cout << 0;
    }
    else {
        lengthA = sqrt(pow(coordX, 2) + pow(coordY, 2));
        lengthB = sqrt(pow(coordX - length, 2) + pow(coordY, 2));
        lengthC = sqrt(pow(coordX, 2) + pow(coordY - length, 2));

        if( (lengthA < lengthB && lengthA < lengthC) || (lengthA < lengthB && lengthA == lengthC)|| (lengthA == lengthB && lengthA < lengthC))
            numberDot = 1;
        else if((lengthB < lengthA && lengthB < lengthC) || (lengthB < lengthA && lengthB == lengthC))
            numberDot = 2;
        else if(lengthC < lengthA && lengthC < lengthB)
            numberDot = 3;
        cout << numberDot;
    }

    return 0;
}