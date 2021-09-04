#include <iostream>
#include <vector>

using namespace std;

int main(){
    int numberKids;
    long coordinateSchool;
    vector<int> coordinatesKids;

    cin >> numberKids;

    for(int i = numberKids; i > 0; i--) {
        int buffer;
        cin >> buffer;
        coordinatesKids.push_back(buffer);
    }

    vector<int>::iterator it = coordinatesKids.begin();

    if((numberKids % 2) == 0) {
        coordinateSchool = (*(it + numberKids / 2) + *(it + numberKids / 2 - 1)) / 2;
    }
    else {
        coordinateSchool = *(it + numberKids / 2);
    }
    cout << coordinateSchool;
    return 0;
}