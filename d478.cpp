#include <iostream>
#include <vector>

using namespace std;

int main()
{
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
        int same_count = 0;
        for (int j : num_list[0])
        {
            for (int k : num_list[1])
            {
                if (j == k)
                {
                    same_count++;
                    break;
                }
            }
        }
        cout << same_count << endl;
    }
    return 0;
}
