#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool MMsort(int num1, int num2)
{
    if ((num1 % 10) != (num2 % 10))
    {
        return (num1 % 10) < (num2 % 10);
    }
    return num1 > num2;
}

int main()
{
    int n, num;
    vector<int> num_vec;
    while (cin >> n)
    {
        num_vec.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            num_vec.push_back(num);
        }
        sort(num_vec.begin(), num_vec.end(), MMsort);
        for (int i : num_vec)
        {
            cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}
