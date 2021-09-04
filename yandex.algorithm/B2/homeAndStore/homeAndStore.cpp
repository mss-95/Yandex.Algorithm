#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> street;
    int build;
    for(int i = 0; i < 10; i++) {
        cin >> build;
        street.push_back(build);
    }

    return 0;
}