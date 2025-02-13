#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b, N;
    while (cin >> a >> b >> N)
    {
        vector<int> after_point;
        int rest = a % b;
        for (int i = 0; i < N; i++)
        {
            rest *= 10;
            after_point.push_back(rest / b);
            rest %= b;
        }
        cout << a / b << '.';
        for (int i : after_point)
        {
            cout << i;
        }
        cout << endl;
    }
    return 0;
}
