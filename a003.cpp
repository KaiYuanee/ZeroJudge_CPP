#include <iostream>

using namespace std;

int main()
{
    int M, D, S;
    cin >> M >> D;
    S = (M * 2 + D) % 3;
    switch (S)
    {
        case 0:
            cout << "普通";
            break;
        case 1:
            cout << "吉";
            break;
        case 2:
            cout << "大吉";
            break;
    }
    return 0;
}
