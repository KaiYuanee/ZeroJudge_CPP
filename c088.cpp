#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int fast_pow(int base, int exp) {
    int result = 1;
    while (exp > 0) {
        if (exp % 2) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

vector<int> generatePrimes(int X) {
    vector<int> result;
    vector<bool> is_prime_vec((int)sqrt(X) + 1, true);
    for (int i = 2; i < is_prime_vec.size(); i++) {
        if (is_prime_vec[i]) {
            for (int j = i * i; j < is_prime_vec.size(); j += i) {
                is_prime_vec[j] = false;
            }
        }
    }
    for (int i = 2; i < is_prime_vec.size(); i++) {
        if (is_prime_vec[i]) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    string str;
    while (getline(cin, str)) {
        if (str == "0") {
            break;
        }
        stringstream ss(str);
        int base, exp, X = 1;
        while (ss >> base >> exp) {
            X *= fast_pow(base, exp);
        }
        X -= 1;
        vector<int> prime_vec = generatePrimes(X);
        vector<vector<int>> prime_factorization;
        for (int i : prime_vec) {
            if (X == 1) {
                break;
            }
            int count = 0;
            while (X % i == 0) {
                count++;
                X /= i;
            }
            if (count) {
                prime_factorization.push_back({i, count});
            }
        }
        if (X > 1) {
            prime_factorization.push_back({X, 1});
        }
        reverse(prime_factorization.begin(), prime_factorization.end());
        for (vector<int> v : prime_factorization) {
            for (int i : v) {
                cout << i << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}
