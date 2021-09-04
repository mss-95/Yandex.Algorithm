#include <iostream>
#include <vector>

using namespace std;

int main() {
    int length;
    int numberBlocks;
    vector<int>coordinatesBlocks;

    int coordinateLeft, coordinateRight;

    double coordinateMiddle;

    cin >> length;
    cin >> numberBlocks;

    for(int i = 0; i < numberBlocks; i++) {
        int buffer;
        cin >> buffer;
        coordinatesBlocks.push_back(buffer);
    }

    if(length % 2 == 0)
        coordinateMiddle = length / 2.0 - 0.5;
    else
        coordinateMiddle = length / 2;

    coordinateLeft = 0;

    vector<int>::iterator it;
    it = coordinatesBlocks.end() - 1;
    coordinateRight = *it;

    for(vector<int>::iterator it = coordinatesBlocks.begin(); it < coordinatesBlocks.end(); it++) {
        if(*it <= coordinateMiddle) {
            if(coordinateMiddle - *it <= coordinateMiddle - coordinateLeft) coordinateLeft = *it;
        }
        if(*it >= coordinateMiddle) {
            if(*it - coordinateMiddle <= coordinateRight - coordinateMiddle) coordinateRight = *it;
        }  
    }

    if(coordinateLeft == coordinateRight) {
        cout << coordinateLeft << endl;
    }
    else
    {
        cout << coordinateLeft << endl;
        cout << coordinateRight << endl;
    }
    return 0;
}