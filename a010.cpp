#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, end_int, pow_count;
    bool first = true;
    cin >> num;
    end_int = num;
    for (int i = 2; i <= sqrt(end_int); i++)
    {
        pow_count = 0;
        while (num % i == 0)
        {
            num /= i;
            pow_count++;
        }
        if (pow_count == 0)
            continue;
        if (first)
        {
            if (pow_count == 1)
            {
                cout << i;
                first = false;
            }
            if (pow_count > 1)
            {
                cout << i << "^" << pow_count;
                first = false;
            }
        }
        else
        {
            if (pow_count == 1)
                cout << " * " << i;
            if (pow_count > 1)
                cout << " * " << i << "^" << pow_count;
        }
        if (num == 1)
            break;
    }
    if (num > 1)
    {
        if (first)
            cout << num;
        else
            cout << " * " << num;
    }
    return 0;
}
