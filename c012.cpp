#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

bool compare(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second != p2.second) {
        return p1.second < p2.second;
    }
    else {
        return p1.first > p2.first;
    }
}

int main() {
    string s;
    while (getline(cin, s)) {
        map<int, int> nums_of_each_char_map;
        for (char c : s) {
            nums_of_each_char_map[(int)c]++;
        }
        vector<pair<int, int>> nums_of_each_char_vec(nums_of_each_char_map.begin(), nums_of_each_char_map.end());
        sort(nums_of_each_char_vec.begin(), nums_of_each_char_vec.end(), compare);
        for (int i = 0; i < nums_of_each_char_vec.size(); i++) {
            cout << nums_of_each_char_vec[i].first << ' ' << nums_of_each_char_vec[i].second << endl;
        }
        cout << endl;
    }
    return 0;
}
