#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    cout << 0 + 590 * (a >= 6) + 200 * (a >= 12) + 100 * (a >= 18) - 491 * (a >= 60) << endl;
    return 0;
}
