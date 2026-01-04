#include <iostream>

using namespace std;

int main() {
    int i, j;
    while (cin >> i >> j) {
        int max_cycle_length = 0, lower_bound, upper_bound;
        if (i > j) {
            lower_bound = j;
            upper_bound = i;
        }
        else {
            lower_bound = i;
            upper_bound = j;
        }
        for (int t = lower_bound; t <= upper_bound; t++) {
            int current_integer = t, cycle_length = 1;
            while (current_integer > 1) {
                if (current_integer % 2) {
                    current_integer = 3 * current_integer + 1;
                }
                else {
                    current_integer /= 2;
                }
                cycle_length++;
            }
            if (cycle_length > max_cycle_length) {
                max_cycle_length = cycle_length;
            }
        }
        cout << i << ' ' << j << ' ' << max_cycle_length << endl;
    }
    return 0;
}
