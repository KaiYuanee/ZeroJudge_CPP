#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    string line;
    while (getline(cin, line))
    {
        stringstream ss(line);
        int num;
        vector<int> num_list;
        while (ss >> num)
        {
            num_list.push_back(num);
        }
        int num_list_size = num_list.size();
        if ((num_list_size == 1) && (num_list[0] == -1))
        {
            break;
        }
        vector<int> ori_num_list = {num_list_size};
        for (int i = num_list_size - 2; i >= 0; i--)
        {
            ori_num_list.insert(ori_num_list.begin() + num_list[i], i + 1);
        }
        for (int i : ori_num_list)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
