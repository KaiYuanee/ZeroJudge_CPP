#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int num)
{
    if (num == 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        int num_of_prime = 0;
        for (int i = a; i <= b; i++)
        {
            if (isPrime(i))
            {
                num_of_prime++;
            }
        }
        cout << num_of_prime << endl;
    }
    return 0;
}
