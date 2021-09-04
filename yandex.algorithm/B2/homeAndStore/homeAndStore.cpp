#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> street;
    int build;
    int maxPath = 0;
    int minPathIt = 0;
    int pathDown = 0;
    int pathUp = 0;
    for(int i = 0; i < 10; i++) {
        cin >> build;
        street.push_back(build);
    }

    for(vector<int>::iterator it = street.begin(); it < street.end(); it++) {
        if(*it == 1)
        {
            for(vector<int>::iterator searchDown = it-1; searchDown >= street.begin(); searchDown--) {
                if(*searchDown == 2) {
                    pathDown = static_cast<int>(it - searchDown);
                    break;
                }
            }

            for(vector<int>::iterator searchUp = it+1; searchUp < street.end(); searchUp++) {
                if(*searchUp == 2) {
                    pathUp = static_cast<int>(searchUp - it);
                    break;
                }
            }
            if(pathDown != 0 && pathUp != 0) {
                if(pathDown >= pathUp) minPathIt = pathUp;
                else minPathIt = pathDown;
            }
            else if (pathDown == 0) {
                minPathIt = pathUp;
            }              
            else if(pathUp == 0) {
                minPathIt = pathDown;
            }
            if(minPathIt > maxPath) maxPath = minPathIt;
            pathUp = 0;
            pathDown = 0;

        }
    }
    cout << maxPath;
    return 0;
}