#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        cout << char(str[i] - 7);
    }
    return 0;
}
