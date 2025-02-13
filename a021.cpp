#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string add(string num1, string num2)
{
    while (num1.length() < num2.length())
    {
        num1 = "0" + num1;
    }
    while (num1.length() > num2.length())
    {
        num2 = "0" + num2;
    }
    string value = "";
    int carry, sum;
    for (int i = num1.length() - 1; i >= 0; i--)
    {
        sum = (num1[i] - '0') + (num2[i] - '0') + carry;
        carry = sum / 10;
        value += (sum % 10) + '0';
    }
    if (carry)
    {
        value += carry + '0';
    }
    reverse(value.begin(), value.end());
    return value;
}

string sub(string num1, string num2)
{
    bool is_negative = false;
    if (num1 < num2)
    {
        swap(num1, num2);
        is_negative = true;
    }
    while (num1.length() > num2.length())
    {
        num2 = "0" + num2;
    }
    string value = "";
    int borrow, diff;
    for (int i = num1.length() - 1; i >= 0; i--)
    {
        diff = (num1[i] - '0') - (num2[i] - '0') - borrow;
        if (diff < 0)
        {
            diff += 10;
            borrow = 1;
        }
        else
        {
            borrow = 0;
        }
        value += diff + '0';
    }
    while (value.length() > 1 && value.back() == '0')
    {
        value.pop_back();
    }
    reverse(value.begin(), value.end());
    if (is_negative)
    {
        return "-" + value;
    }
    return value;
}

string mul(string num1, string num2)
{
    int len1 = num1.length(), len2 = num2.length(), product, sum;
    vector<int> value(len1 + len2, 0);
    for (int i = len1 - 1; i >= 0; i--)
    {
        for (int j = len2 - 1; i >= 0; i--)
        {
            product = (num1[i] - '0') * (num2[i] - '0');
            sum += 
        }
    }
}

int main()
{
    string num1, num2;
    char op;
    cin >> num1 >> op >> num2;
    if (op == '+')
    {
        cout << add(num1, num2) << endl;
    }
    if (op == '-')
    {
        cout << sub(num1, num2) << endl;
    }
    if (op == '*')
    {
        cout << mul(num1, num2) << endl;
    }
    if (op == '/')
    {
        cout << div(num1, num2) << endl;
    }
    return 0;
}
