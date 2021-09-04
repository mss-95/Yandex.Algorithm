#include <iostream>

using namespace std;

int main(){
    short firstNum, secondNum, year;

    cin >> firstNum;
    cin >> secondNum;
    cin >> year;

    if(firstNum == secondNum)
        cout << 1 << endl;
    else if(firstNum > 12 && secondNum < 13)
        cout << 1 << endl;
    else if(firstNum < 13 && secondNum > 12)
        cout << 1 << endl;
    else
        cout << 0 << endl;

    return 0;
}