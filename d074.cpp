#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool descending_order(int num1, int num2)
{
    return num1 > num2;
}

int main()
{
    int n, num;
    vector<int> stu_num_list;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        stu_num_list.push_back(num);
    }
    sort(stu_num_list.begin(), stu_num_list.end(), descending_order);
    cout << stu_num_list[0] << endl;
    return 0;
}
