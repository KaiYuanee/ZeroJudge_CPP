#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n;
    while (cin >> n)
    {
        int digit_sum = 0;
        for (char c : n)
        {
            if (c == '-')
            {
                continue;
            }
            else
            {
                digit_sum += c - '0';
            }
        }
        if (digit_sum % 3)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}
