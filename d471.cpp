#include <string>
#include <iostream>
#include <cmath>

string toBinary(digit_num, num)
{
    
}

using namespace std;

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
