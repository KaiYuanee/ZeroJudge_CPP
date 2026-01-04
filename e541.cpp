#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int case_count = 1;
    while (true) {
        int N, Q;
        cin >> N >> Q;
        if ((N == 0) && (Q == 0)) {
            break;
        }
        cout << "CASE# " << case_count << ":" << endl;
        vector<int> nums(N);
        for (int i = 0; i < N; i++) {
            cin >> nums[i];
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < Q; i++) {
            int x, j = 0;
            cin >> x;
            while (j < nums.size()) {
                if (nums[j] == x) {
                    cout << x << " found at " << j + 1 << endl;
                    break;
                }
                j++;
            }
            if (j == nums.size()) {
                cout << x << " not found" << endl;
            }
        }
        case_count++;
    }
    return 0;
}
