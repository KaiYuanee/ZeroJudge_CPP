#include <iostream>
#include <stack>

using namespace std;

int main() {
    int N, k, x;
    stack<int> num_stk;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> k;
        if (k == 1) {
            cin >> x;
            num_stk.push(x);
        }
        if (k == 2) {
            if (num_stk.empty()) {
                cout << -1 << endl;
            }
            else {
                cout << num_stk.top() << endl;
            }
        }
        if (k == 3) {
            if (!num_stk.empty()) {
                num_stk.pop();
            }
        }
    }
    return 0;
}
