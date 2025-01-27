#include <iostream>

using namespace std;

int main(){
    int t, int1, int2, int3, int4;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> int1 >> int2 >> int3 >> int4;
        if (int1 + int3 == int2 * 2) cout << int1 << ' ' << int2 << ' ' << int3 << ' ' << int4 << ' ' << int4 * 2 - int3 << endl;
        else cout << int1 << ' ' << int2 << ' ' << int3 << ' ' << int4 << ' ' << int4 * int4 / int3 << endl;
    }
    return 0;
}
