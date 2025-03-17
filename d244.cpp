#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int num;
    unordered_map<int, int> stone_map;
    while (cin >> num)
    {
        stone_map[num] += 1;
    }
    for (const auto& pair : stone_map)
    {
        if (pair.second % 3 == 2)
        {
            cout << pair.first << endl;
            break;
        }
    }
    return 0;
}
