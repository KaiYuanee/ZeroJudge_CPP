#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int S, day = 1;
    while (cin >> S) {
        cin.ignore();
        vector<bool> time_vec(1080, false);
        for (int i = 0; i < S; i++) {
            string s;
            getline(cin, s);
            int start_time_h = stoi(s.substr(0, 2));
            int start_time_m = stoi(s.substr(3, 2));
            int end_time_h = stoi(s.substr(6, 2));
            int end_time_m = stoi(s.substr(9, 2));
            int start_time = start_time_h * 60 + start_time_m;
            int end_time = end_time_h * 60 + end_time_m;
            for (int j = start_time; j < end_time; j++) {
                time_vec[j] = true;
            }
        }
        bool is_recording = false;
        int rest_time_count = 0, max_rest_time = 0, nap_start, longest_nap_start;
        for (int i = 600; i < 1080; i++) {
            if (!is_recording && !time_vec[i]) {
                is_recording = true;
                nap_start = i;
                rest_time_count = 0;
            }
            if (is_recording && !time_vec[i]) {
                rest_time_count++;
            }
            if (is_recording && time_vec[i]) {
                is_recording = false;
                if (rest_time_count > max_rest_time) {
                    max_rest_time = rest_time_count;
                    longest_nap_start = nap_start;
                }
            }
        }
        if (rest_time_count > max_rest_time) {
            max_rest_time = rest_time_count;
            longest_nap_start = nap_start;
        }
        cout << "Day #" << day << ": ";
        cout << "the longest nap starts at ";
        cout << setw(2) << setfill('0') << longest_nap_start / 60;
        cout << ":";
        cout << setw(2) << setfill('0') << longest_nap_start % 60;
        cout << " and will last for ";
        if (max_rest_time >= 60) {
            cout << max_rest_time / 60 << " hours and ";
        }
        cout << max_rest_time % 60 << " minutes." << endl;
        day++;
    }
    return 0;
}
