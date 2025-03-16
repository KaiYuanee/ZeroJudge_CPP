#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    cout << max(max(num1, num2), num3) << endl;
    return 0;
}
