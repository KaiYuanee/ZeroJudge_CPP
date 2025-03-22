#include <string>
#include <iostream>
#include <cmath>

using namespace std;

string toBinary(int digit_num, int num)
{
    string binary_num = "";
    for (int i = 0; i < digit_num; i++)
    {
        binary_num = to_string(num % 2) + binary_num;
        num /= 2;
    }
    return binary_num;
}

int main()
{
    int n;
    while (cin >> n)
    {
        int max_value = (int)pow(2, n) - 1; 
        for (int i = 0; i <= max_value; i++)
        {
            cout << toBinary(n, i) << endl;
        }
    }
    return 0;
}
