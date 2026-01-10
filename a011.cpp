#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    string str;
    int word_count = 0;
    while (getline(cin, str)) {
        for (int i = 0; i < str.size(); i++) {
            if (!isalpha(str[i])) {
                str[i] = ' ';
            }
        }
        vector<string> word_vec;
        stringstream ss(str);
        string word;
        while (ss >> word) {
            word_vec.push_back(word);
        }
        cout << word_vec.size() << endl;
    }
    return 0;
}
