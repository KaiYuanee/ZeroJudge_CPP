#include <iostream>

using namespace std;

int main()
{
    int y;
    cin >> y;
    if ((!(y % 4) && (y % 100)) || !(y % 400))
    {
        cout << "a leap year" << endl;
    }
    else
    {
        cout << "a normal year" << endl;
    }
    return 0;
}
