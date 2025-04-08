#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int scores = 0;
    for (int i = 0; i < 5; i++)
    {
        int num;
        vector<int> num_vec;
        for (int j = 0; j < 3; j++)
        {
            cin >> num;
            num_vec.push_back(num);
        }
        sort(num_vec.begin(), num_vec.end());
        if (num_vec[0] + num_vec[1] > num_vec[2])
        {
            scores++;
        }
    }
    cout << scores << endl;
    return 0;
}
