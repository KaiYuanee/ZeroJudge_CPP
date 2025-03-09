#include <iostream>

using namespace std;

int carryTimes(int N)
{
    int carry_times = 0;
    while (N & 1)
    {
        carry_times += 1;
        N >>= 1;
    }
    return carry_times;
}

int main()
{
    int N;
    while (scanf("%d", &N))
    {
        if (N == 0)
        {
            break;
        }
        printf("%d\n", carryTimes(N));
    }
    return 0;
}
