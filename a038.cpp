#include <iostream>
#include <algorithm>

using namespace std;

int reverseNum(string num)
{
    reverse(num.begin(), num.end());
    int rev_num = stoi(num);
    return rev_num;
}

int main()
{
    string num;
    getline(cin, num);
    cout << reverseNum(num);
    return 0;
}
