#include <iostream>

using namespace std;

int main()
{
    int n, y;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> y;
        cout << "Case " << i + 1 << ": ";
        if ((!(y % 4) && (y % 100)) || !(y % 400))
        {
            cout << "a leap year" << endl;
        }
        else
        {
            cout << "a normal year" << endl;
        }
    }
    return 0;
}
