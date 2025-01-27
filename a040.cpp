#include <iostream>

using namespace std;

int pow(int int1, int int2)
{
    int value = 1;
    for (int i = 0; i < int2; i++)
    {
        value *= int1;
    }
    return value;
}

bool isArmstrong(int int1)
{
    string strtype_int1 = to_string(int1);
    int armstrong_sum = 0, power = strtype_int1.length();
    for (char i : strtype_int1)
    {
        armstrong_sum += pow(i - '0', power);
    }
    return int1 == armstrong_sum;
}

int main()
{
    int n, m, counter = 0;
    cin >> n >> m;
    for (int i = n; i <= m; i++)
    {
        if (isArmstrong(i))
        {
            cout << i << " ";
            counter++;
        }
    }
    if (counter == 0)
    {
        cout << "none";
    }
    return 0;
}
