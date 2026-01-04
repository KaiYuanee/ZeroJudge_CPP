#include <iostream>

using namespace std;

int main() {
    int H, U, D, F;
    while (cin >> H >> U >> D >> F) {
        if (H == 0) {
            break;
        }
        H *= 100;
        U *= 100;
        D *= 100;
        int snail = 0;
        int day = 1;
        while ((snail <= H) && (snail >= 0)) {
            if (U - (day - 1) * F * U / 100 > 0) {
                snail += (U - (day - 1) * F * U / 100);
            }
            if (snail > H) {
                break;
            }
            snail -= D;
            if (snail < 0) {
                break;
            }
            day++;
        }
        if (snail > H) {
            cout << "success on day " << day << endl;
        }
        if (snail < 0) {
            cout << "failure on day " << day << endl;
        }
    }
    return 0;
}
