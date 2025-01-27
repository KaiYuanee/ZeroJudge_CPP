#include <iostream>

using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        int sum = n, counter = 1;
        while (sum <= m)
        {
            n++;
            sum += n;
            counter++;
        }
        cout << counter << endl;
    }
    return 0;
}
