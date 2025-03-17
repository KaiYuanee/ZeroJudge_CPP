#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<unsigned long long> fibonacci_dp;
    fibonacci_dp.push_back(1);
    fibonacci_dp.push_back(2);
    for (int i = 2; i < 100; i++)
    {
        fibonacci_dp.push_back(fibonacci_dp[i - 2] + fibonacci_dp[i - 1]);
    }
    int n;
    while (cin >> n)
    {
        cout << fibonacci_dp[n - 1] << endl;
    }
    return 0;
}
