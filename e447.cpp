#include <iostream>
#include <queue>

using namespace std;

int main() {
    int N, k, x;
    queue<int> num_que;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> k;
        if (k == 1) {
            cin >> x;
            num_que.push(x);
        }
        if (k == 2) {
            if (num_que.empty()) {
                cout << -1 << endl;
            }
            else {
                cout << num_que.front() << endl;
            }
        }
        if (k == 3) {
            if (!num_que.empty()) {
                num_que.pop();
            }
        }
    }
    return 0;
}
