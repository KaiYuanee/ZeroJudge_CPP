#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> combination(vector<int> &nums, int k) {
    if (k == 0) {
        return {{}};
    }
    if (nums.size() < k) {
        return {};
    }
    vector<vector<int>> result;
    int first_num = nums[0];
    vector<int> nums_without_first_num = nums;
    nums_without_first_num.erase(nums_without_first_num.begin());
    vector<vector<int>> subcomb1 = combination(nums_without_first_num, k - 1);
    for (vector<int> v : subcomb1) {
        v.insert(v.begin(), first_num);
        result.push_back(v);
    }
    vector<vector<int>> subcomb2 = combination(nums_without_first_num, k);
    for (vector<int> v : subcomb2) {
        result.push_back(v);
    }
    return result;
}

int main() {
    int k, t = 0;
    while (cin >> k) {
        if (k == 0) {
            break;
        }
        t++;
        vector<int> nums(k);
        for (int i = 0; i < k; i++) {
            cin >> nums[i];
        }
        vector<vector<int>> comb = combination(nums, 6);
        if (t != 1) {
            cout << endl;
        }
        for (vector<int> v : comb) {
            for (int i = 0; i < v.size(); i++) {
                if (i == v.size() - 1) {
                    cout << v[i];
                }
                else {
                    cout << v[i] << ' ';
                }
            }
            cout << endl;
        }
    }
    return 0;
}
