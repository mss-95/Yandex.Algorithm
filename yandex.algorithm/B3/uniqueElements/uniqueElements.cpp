#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main() {

    string str;
    vector<int> arr;

    getline(cin, str);
    stringstream inp(str);

    int buffer;
    bool isNotUnique = false;

    while (inp >> buffer) {
        arr.push_back(buffer);
    }


    for(vector<int>::iterator itExt = arr.begin(); itExt != arr.end(); itExt++)
    {
        for(vector<int>::iterator itInt = itExt + 1; itInt != arr.end(); itInt++)
        {
            if(*itExt == *itInt) {
                arr.erase(itInt);
                itInt--;
                isNotUnique = true;
            }
        }
        if(isNotUnique) {
            isNotUnique = false;
            arr.erase(itExt);
            itExt--;
        }
        else {
            cout << *itExt << " " << endl;
        }
    }
    return 0;
}