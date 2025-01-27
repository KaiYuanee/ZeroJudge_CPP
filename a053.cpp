#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    if ((N >= 0) && (N <= 10))
    {
        cout << 6 * N;
    }
    else if ((N >= 11) && (N <= 20))
    {
        cout << 60 + 2 * (N - 10);
    }
    else if ((N >= 21) && (N <= 40))
    {
        cout << 60 + N;
    }
    else
    {
        cout << 100;
    }
    return 0;
}
