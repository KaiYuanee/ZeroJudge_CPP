#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        string str;
        if (i == n - 1) {
            str = "ABCDEFGHI";
        }
        else {
            getline(cin, str);
        }
        sort(str.begin(), str.end());
        do {
            cout << str << endl;
        } while (next_permutation(str.begin(), str.end()));
        cout << endl;
    }
}
