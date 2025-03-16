#include <iostream>

using namespace std;

int main()
{
    int t, y;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> y;
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
