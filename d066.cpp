#include <iostream>

using namespace std;

int main()
{
    int hh, mm;
    cin >> hh >> mm;
    int min_sum = hh * 60 + mm;
    if ((min_sum >= 450) && (min_sum < 1020))
    {
        cout << "At School" << endl;
    }
    else
    {
        cout << "Off School" << endl;
    }
    return 0;
}
