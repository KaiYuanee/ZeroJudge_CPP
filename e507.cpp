#include <iostream>
#include <vector>

using namespace std;

int main() {
    string a, b;
    while (getline(cin, a) && getline(cin, b)) {
        vector<int> a_stat(26, 0);
        for (char c : a) {
            if (isalpha(c)) {
                a_stat[c - 'a']++;
            }
        }
        vector<int> x(26, 0);
        for (char c : b) {
            if (a_stat[c - 'a']) {
                a_stat[c - 'a']--;
                x[c - 'a']++;
            }
        }
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < x[i]; j++) {
                cout << (char)('a' + i);
            }
        }
        cout << endl;
    }
    return 0;
}
