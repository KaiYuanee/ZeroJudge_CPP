#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << -1 * (n < 0) + (n > 0) << endl;
    return 0;
}
