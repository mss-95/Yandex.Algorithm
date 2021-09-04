#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int numberFolders;
    int maxDiplomasInFolder = 0;
    vector<int>numberDiplomasInFolders;
    int time = 0;

    cin >> numberFolders;

    for(int i = 0; i < numberFolders; i++) {
        int buffer;
        cin >> buffer;
        if(buffer > maxDiplomasInFolder){
            time += maxDiplomasInFolder;
            maxDiplomasInFolder = buffer;
        }
        else {
            time += buffer;
        }

        numberDiplomasInFolders.push_back(buffer);
    }
    cout << time;

    return 0;
}