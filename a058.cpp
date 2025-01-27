#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, int1;
    vector<int> rems = {0, 0, 0};
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> int1;
        rems[int1 % 3]++;
    }
    for (int i : rems){
        cout << i << ' ';
    }
    return 0;
}
