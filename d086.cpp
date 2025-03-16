#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;
    while (1)
    {
        getline(cin, s);
        if (s == "0")
        {
            break;
        }
        int value_sum = 0;
        for (char c : s)
        {
            if (isalpha(c))
            {
                if (isupper(c))
                {
                    value_sum += c - 'A' + 1;
                }
                else
                {
                    value_sum += c - 'a' + 1;
                }
            }
            else
            {
                value_sum = -1;
                break;
            }
        }
        if (value_sum == -1)
        {
            cout << "Fail" << endl;
        }
        else
        {
            cout << value_sum << endl;
        }
    }
    return 0;
}
