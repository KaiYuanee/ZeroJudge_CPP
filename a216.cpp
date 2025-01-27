#include <iostream>

using namespace std;

long long int f(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return num + f(num - 1);
}

long long int g(int num)
{
    if (num == 1)
    {
        return 1;
    }
    return f(num) + g(num - 1);
}

int main()
{
    int n;
    while (cin >> n)
    {
        cout << f(n) << ' ' << g(n) << endl;
    }
    return 0;
}
