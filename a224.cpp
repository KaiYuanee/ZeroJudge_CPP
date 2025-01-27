#include <iostream>
#include <unordered_map>
#include <ctype.h>

using namespace std;

bool canFormPalindrome(string str)
{
    unordered_map<char, int> charCount;
    for (char c : str)
    {
        if (isalpha(c))
        {
            charCount[toupper(c)]++;
        }
    }
    int oddCount = 0;
    for (const pair<const char, int> &entry : charCount)
    {
        if (entry.second % 2 != 0)
        {
            oddCount++;
        }
        if (oddCount > 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string input_str;
    while (getline(cin, input_str))
    {
        if (canFormPalindrome(input_str))
        {
            cout << "yes !" << endl;
        }
        else
        {
            cout << "no..." << endl;
        }
    }
    return 0;
}
