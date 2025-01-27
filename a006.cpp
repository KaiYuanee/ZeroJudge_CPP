#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c, Dis, x1, x2;
    cin >> a >> b >> c;
    Dis = b * b - 4 * a * c;
    if (Dis > 0)
    {
        x1 = (b * -1 + int(sqrt(Dis))) / (a * 2);
        x2 = (b * -1 - int(sqrt(Dis))) / (a * 2);
        cout << "Two different roots x1=" << x1 << " , x2=" << x2;
    }
    else if (Dis == 0)
    {
        x1 = (b * -1) / (a * 2);
        cout << "Two same roots x=" << x1;
    }
    else
    {
        cout << "No real root";
    }
    return 0;
}
