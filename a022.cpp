#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    string reversed_str = str;
    reverse(reversed_str.begin(), reversed_str.end());
    if (str == reversed_str)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}
