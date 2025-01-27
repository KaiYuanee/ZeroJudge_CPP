#include <iostream>
#include <math.h>

using namespace std;

bool isSquareNum(int num)
{
    int sqrtNum = (int)sqrt(num);
    return (sqrtNum * sqrtNum == num);
}

int main()
{
    int T, a, b;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int square_sum = 0;
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            if (isSquareNum(j))
            {
                square_sum += j;
            }
        }
        cout << "Case " << i + 1 << ": " << square_sum << endl;
    }
    return 0;
}
