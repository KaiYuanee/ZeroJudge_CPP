#include <iostream>

using namespace std;

int main() {
    int pos = 0, k, x1, y1, x2, y2;
    cin >> k >> x1 >> y1 >> x2 >> y2;
    while (k > 0) {
        pos += k;
        if (!(pos % x1)) {
            k -= y1;
        }
        if (!(pos % x2)) {
            k -= y2;
        }
    }
    cout << pos << endl;
    return 0;
}
