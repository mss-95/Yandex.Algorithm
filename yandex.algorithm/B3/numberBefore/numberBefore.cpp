#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

int main() {

    string str;
    map<int, int> arr;

    getline(cin, str);
    stringstream inp(str);
    int buffer;
    while (inp >> buffer) {
        if(arr.count(buffer) > 0) {
            cout << "YES" << endl;
        }
        else
        {
            arr.insert(pair<int, int>(buffer, 1));
            cout << "NO" << endl;
        }
    }
    return 0;
}