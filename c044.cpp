#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<char, int> p1, pair<char, int> p2) {
    if (p1.second != p2.second) {
        return p1.second > p2.second;
    }
    else {
        return p1.first < p2.first;
    }
}

int main() {
    int n;
    map<char, int> stat_map;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string s;
        getline(cin, s);
        for (char c : s) {
            if ((c >= 'A') && (c <= 'Z')) {
                stat_map[c]++;
            }
            else if ((c >= 'a') && (c <= 'z')) {
                stat_map[(char)(c - 32)]++;
            }
        }
    }
    vector<pair<char, int>> stat_vec(stat_map.begin(), stat_map.end());
    sort(stat_vec.begin(), stat_vec.end(), compare);
    for (int i = 0; i < stat_vec.size(); i++) {
        cout << stat_vec[i].first << ' ' << stat_vec[i].second << endl;
    }
    return 0;
}
