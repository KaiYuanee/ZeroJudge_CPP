#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, max_price = 0;
        cin >> n;
        vector<int> nums(n);
        for (int j = 0; j < n; j++) {
            cin >> nums[j];
        }
        if (n < 3) {
            cout << 0 << endl;
            continue;
        }
        sort(nums.begin(), nums.end(), greater<int>());
        for (int j = 2; j < n; j = j + 3) {
            max_price += nums[j];
        }
        cout << max_price << endl;
    }
    return 0;
}
