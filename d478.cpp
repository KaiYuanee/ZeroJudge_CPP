#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        vector<vector<int>> num_list(2, vector<int>(m));
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < m; k++)
            {
                cin >> num_list[j][k];
            }
        }
        unordered_set<int> num_set(num_list[1].begin(), num_list[1].end());
        int same_count = 0;
        for (int j : num_list[0])
        {
            if (num_set.count(j))
            {
                same_count++;
            }
        }
        cout << same_count << endl;
    }
    return 0;
}
