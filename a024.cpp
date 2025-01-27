#include <iostream>

using namespace std;

int gcd(int int1, int int2)
{
    if (int2 == 0)
    {
        return int1;
    }
    return gcd(int2, int1 % int2);
}

int main()
{
    int int1, int2;
    cin >> int1 >> int2;
    cout << gcd(int1, int2);
    return 0;
}
