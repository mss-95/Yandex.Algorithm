#include <iostream>

using namespace std;

int main(){
    short exitCode, verdict;
    unsigned short interactor, checker;

    cin >> exitCode;
    cin >> interactor;
    cin >> checker;

    switch(interactor)
    {
        case 0:
            if(exitCode != 0)
                verdict = 3;
            else
                verdict = checker;
        break;

        case 1:
            verdict = checker;
        break;

        case 4:
            if(exitCode != 0)
                verdict = 3;
            else
                verdict = 4;
        break;

        case 6:
            verdict = 0;
        break;

        case 7:
            verdict = 1;
        break;

        default:
            verdict = interactor;
        break;
    }
    cout << verdict;
    return 0;
}