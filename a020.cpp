#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool isvalid(string id){
    unordered_map<char, int> region_map = {
        {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14},
        {'F', 15}, {'G', 16}, {'H', 17}, {'I', 34}, {'J', 18},
        {'K', 19}, {'L', 20}, {'M', 21}, {'N', 22}, {'O', 35},
        {'P', 23}, {'Q', 24}, {'R', 25}, {'S', 26}, {'T', 27},
        {'U', 28}, {'V', 29}, {'W', 32}, {'X', 30}, {'Y', 31}, {'Z', 33}
    };
    int region_num = region_map[id[0]];
    int sum = region_num / 10 + region_num % 10 * 9;
    for (int i = 1; i <= 8; i++){
        sum += (id[i] - '0') * (9 - i);
    }
    sum += id[9] - '0';
    if (sum % 10 == 0){
        return true;
    } else {
        return false;
    }
}

int main(){
    string id;
    getline(cin, id);
    if (isvalid(id)){
        cout << "real" << endl;
    } else{
        cout << "fake" << endl;
    }
    return 0;
}
