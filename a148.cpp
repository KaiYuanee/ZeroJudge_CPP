#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, score;
    while (cin >> n)
    {
        int score_sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> score;
            score_sum += score;
        }
        if (score_sum > n * 59)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }
    }
    return 0;
}
