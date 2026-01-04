#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void isr(int num, vector<int> &nums) {
    int nums_size = nums.size();
    int i = 0;
    while (i < nums_size) {
        if (num < nums[i]) {
            nums.insert(nums.begin() + i, num);
            break;
        }
        i++;
    }
    if (i == nums_size) {
        nums.push_back(num);
    }
}

int main() {
    int num;
    vector<int> nums;
    while (cin >> num) {
        isr(num, nums);
        if (nums.size() % 2) {
            cout << nums[nums.size() / 2] << endl;
        }
        else {
            cout << (nums[nums.size() / 2 - 1] + nums[nums.size() / 2]) / 2 << endl;
        }
    }
    return 0;
}
