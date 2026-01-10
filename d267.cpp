#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {
        string str;
        vector<int> alpha_stat(26, 0);
        getline(cin, str);
        for (char c : str) {
            if (isupper(c)) {
                alpha_stat[c - 'A']++;
            }
            else if (islower(c)) {
                alpha_stat[c - 'a']++;
            }
        }
        string max_alpha;
        int max_time = 0;
        for (int i = 0; i < 26; i++) {
            if (alpha_stat[i] > max_time) {
                max_alpha.clear();
                max_alpha += 'a' + i;
                max_time = alpha_stat[i];
            }
            else if (alpha_stat[i] == max_time) {
                max_alpha += 'a' + i;
            }
        }
        cout << max_alpha << endl;
    }
    return 0;
}
