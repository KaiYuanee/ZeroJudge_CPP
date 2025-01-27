#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, num;
    vector<int> num_list;
    while (cin >> n)
    {
        num_list.clear();
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            num_list.push_back(num);
        }
        sort(num_list.begin(), num_list.end());
        for (int i : num_list)
        {
            cout << i << ' ';
        }
        cout << endl;
    }
    return 0;
}
