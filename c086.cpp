#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, X, selection = 0;
    while (cin >> N >> X) {
        selection++;
        vector<bool> player_states(N + 1, true);
        player_states[0] = false;
        int left = N;
        vector<int> poker_point_vec(21);
        for (int i = 1; i <= 20; i++) {
            cin >> poker_point_vec[i];
        }
        if (left <= X) {
            cout << "Selection #" << selection << endl;
            for (int i = 1; i <= N; i++) {
                cout << i << ' ';
            }
            cout << endl << endl;
            continue;
        }
        for (int i = 1; i <= 20; i++) {
            int interval = poker_point_vec[i], pointer = 0;
            while (true) {
                for (int j = 1; j <= interval; j++) {
                    pointer++;
                    if (pointer > N) {
                        break;
                    }
                    if (!player_states[pointer]) {
                        j--;
                    }
                }
                if (pointer > N) {
                    break;
                }
                player_states[pointer] = false;
                left--;
                if (left <= X) {
                    break;
                }
            }
            if (left <= X) {
                break;
            }
        }
        cout << "Selection #" << selection << endl;
        for (int i = 1; i <= N; i++) {
            if (player_states[i]) {
                cout << i << ' ';
            }
        }
        cout << endl << endl;
    }
    return 0;
}
