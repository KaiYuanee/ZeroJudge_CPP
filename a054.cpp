#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

void findvalid(string id_num)
{
    unordered_map<int, char> region_map = {
        {10, 'A'}, {11, 'B'}, {12, 'C'}, {13, 'D'}, {14, 'E'}, 
        {15, 'F'}, {16, 'G'}, {17, 'H'}, {34, 'I'}, {18, 'J'}, 
        {19, 'K'}, {20, 'L'}, {21, 'M'}, {22, 'N'}, {35, 'O'}, 
        {23, 'P'}, {24, 'Q'}, {25, 'R'}, {26, 'S'}, {27, 'T'}, 
        {28, 'U'}, {29, 'V'}, {32, 'W'}, {30, 'X'}, {31, 'Y'}, {33, 'Z'}};
    int sum = 0;
    for (int i = 0; i < 8; i++)
    {
        sum += (id_num[i] - '0') * (8 - i);
    }
    sum += id_num[8] - '0';
    vector<char> valid_regions;
    for (int i = 10; i <= 35; i++)
    {
        if ((sum + i / 10 + i % 10 * 9) % 10 == 0)
        {
            valid_regions.push_back(region_map[i]);
        }
    }
    sort(valid_regions.begin(), valid_regions.end());
    for (char c : valid_regions)
    {
        cout << c;
    }
}

int main()
{
    string id_num;
    getline(cin, id_num);
    findvalid(id_num);
    return 0;
}
