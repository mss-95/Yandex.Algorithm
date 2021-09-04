#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int price;
    cin >> str;

    for(int i = 0; i < str.length() / 2; i++) {
        if(str.at(i) != str.at(str.length() -1 - i)) {
            price++;
        }
    }

    cout << price;
    return 0;

}