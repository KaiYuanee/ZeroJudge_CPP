#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    int N;
    while (cin >> N) {
        if (N == 0) {
            break;
        }
        priority_queue<long long, vector<long long>, greater<long long>> nums;
        for (int i = 0; i < N; i++) {
            int num;
            cin >> num;
            nums.push(num);
        }
        long long cost = 0;
        while (nums.size() > 1) {
            int a = nums.top();
            nums.pop();
            int b = nums.top();
            nums.pop();
            cost += a + b;
            nums.push(a + b);
        }
        cout << cost << endl;
    }
    return 0;
}
