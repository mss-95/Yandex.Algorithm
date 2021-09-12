#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

class InsertingDecToVector
{
private:
    /* data */
public:
    static vector<int> insertVector(string str)
    {
        vector<int>arr;
        stringstream inp(str);
        int buffer;
        while (inp >> buffer) {
            arr.push_back(buffer);
        }
        sort(arr.begin(), arr.end());
        return arr;
    }
};

int main() {

    vector<int> arrayOne;
    vector<int> arrayTwo;

    string str;
    // getline(cin, strOne);
    // getline(cin, strTwo);
    
    // arrayOne = InsertingDecToVector::insertVector(strOne);
    // arrayTwo = InsertingDecToVector::insertVector(strTwo);
    string s;

    getline(cin, str);
    arrayOne = InsertingDecToVector::insertVector(str);

    getline(cin, str);
    arrayTwo = InsertingDecToVector::insertVector(str);

    int count = 0;
    vector<int>::iterator itTwoStart = arrayTwo.begin();
    for(vector<int>::iterator itOne = arrayOne.begin(); itOne != arrayOne.end(); itOne++) {
        if(*itOne != *itOne - 1) {
            for(vector<int>::iterator itTwo = itTwoStart; itTwo != arrayTwo.end(); itTwo++) {
                if(*itOne == *itTwo) {
                    count++;
                    itTwoStart = itTwo;
                    break;
                }
            }
        }
    }

    cout << count;

    return 0;
}