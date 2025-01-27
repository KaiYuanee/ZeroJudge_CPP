#include <iostream>
#include <string>

using namespace std;

string toBinary(int int1)
{
    string binary_num = "";
    while (int1 > 0)
    {
        binary_num = to_string(int1 % 2) + binary_num;
        int1 /= 2;
    }
    if (binary_num.empty())
    {
        return "0";
    }
    else
    {
        return binary_num;
    }
}

int main()
{
    int int1;
    while (cin >> int1)
    {
        cout << toBinary(int1) << endl;
    }
    return 0;
}
