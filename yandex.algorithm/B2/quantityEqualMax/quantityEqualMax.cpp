#include <iostream>

using namespace std;

int main() {
    int number;
    int maxNumber;
    int quantityMaxNumber = 0;
    do {
        cin >> number;
        if(number > maxNumber) {
            maxNumber = number;
            quantityMaxNumber = 1;
        }
        else if(number == maxNumber) {
            quantityMaxNumber++;
        }
            
    }while(number != 0);

    if(maxNumber != 0)
        cout << quantityMaxNumber;
    else
        cout << 0;

    return 0;
}