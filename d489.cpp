#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    int S = (num1 + num2 + num3) / 2;
    cout << S * (S - num1) * (S - num2) * (S - num3) << endl;
    return 0;
}
