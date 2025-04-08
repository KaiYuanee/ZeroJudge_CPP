#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int num;
    vector<int> num_vec;
    for (int t = 0; t < 3; t++)
    {
        cin >> num;
        num_vec.push_back(num);
    }
    sort(num_vec.begin(), num_vec.end());
    if (num_vec[0] * num_vec[0] + num_vec[1] * num_vec[1] > num_vec[2] * num_vec[2])
    {
        cout << "acute triangle" << endl;
    }
    else if (num_vec[0] * num_vec[0] + num_vec[1] * num_vec[1] == num_vec[2] * num_vec[2])
    {
        cout << "right triangle" << endl;
    }
    else
    {
        cout << "obtuse triangle" << endl;
    }
    return 0;
}
