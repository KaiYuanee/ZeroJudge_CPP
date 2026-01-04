#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N, P;
        cin >> N >> P;
        vector<vector<int>> days(N + 1, vector<int>(P + 1, true));
        vector<int> h(P + 1);
        for (int j = 1; j <= P; j++) {
            cin >> h[j];
        }
        for (int j = 1; j <= P; j++) {
            for (int k = 0; k < N + 1; k = k + h[j]) {
                if ((k % 7 != 0) && (k % 7 != 6)) {
                    days[k][j] = false;
                }
            }
        }
        int loss = 0;
        for (int j = 1; j <= N; j++) {
            for (int x : days[j]) {
                if (x == false) {
                    loss++;
                    break;
                }
            }
        }
        cout << loss << endl;
    }
    return 0;
}
