#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int compare(string num1, string num2)
{
    if (num1.length() < num2.length())
    {
        return -1;
    }
    if (num1.length() > num2.length())
    {
        return 1;
    }
    if (num1 < num2)
    {
        return -1;
    }
    if (num1 > num2)
    {
        return 1;
    }
    return 0;
}

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
    int carry = 0, sum;
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
    if (compare(num1, num2) == -1)
    {
        swap(num1, num2);
        is_negative = true;
    }
    while (num1.length() > num2.length())
    {
        num2 = "0" + num2;
    }
    string value = "";
    int borrow = 0, diff;
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
    reverse(num1.begin(), num1.end());
    reverse(num2.begin(), num2.end());
    int len1 = num1.length();
    int len2 = num2.length();
    vector<int> value(len1 + len2, 0);
    for (int i = 0; i < len1; i++)
    {
        for (int j = 0; j < len2; j++)
        {
            value[i + j] += (num1[i] - '0') * (num2[j] - '0');
        }
    }
    for (int i = 0; i < value.size() - 1; i++)
    {
        value[i + 1] += value[i] / 10;
        value[i] %= 10;
    }
    while (value.size() > 1 && value.back() == 0)
    {
        value.pop_back();
    }
    string product;
    for (int i : value)
    {
        product += i + '0';
    }
    reverse(product.begin(), product.end());
    return product;
}

string div(string num1, string num2)
{
    if (compare(num1, num2) == -1)
    {
        return "0";
    }
    string quotient = "", remainder = "";
    for (char digit : num1)
    {
        remainder += digit;
        int count = 0;
        while (compare(remainder, num2) != -1)
        {
            remainder = sub(remainder, num2);
            count++;
        }
        quotient += count + '0';
    }
    while (quotient.length() > 1 && quotient[0] == '0')
    {
        quotient.erase(quotient.begin());
    }
    return quotient;
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
