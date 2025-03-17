#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n;
    while (cin >> n)
    {
        long long num_of_trailing_0 = 0;
        long long power_of_5 = 5;
        while (power_of_5 <= n)
        {
            num_of_trailing_0 += n / power_of_5;
            if (power_of_5 > n / 5)
            {
                break;
            }
            power_of_5 *= 5;
        }
        cout << num_of_trailing_0 << endl;
    }
    return 0;
}
