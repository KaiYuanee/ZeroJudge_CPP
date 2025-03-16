#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

bool isNumeric(string s)
{
    for (char c : s)
    {
        if (!(isdigit(c)))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    while (getline(cin, s))
    {
        vector<string> word_list;
        string word;
        stringstream ss(s);
        while (ss >> word)
        {
            word_list.push_back(word);
        }
        int num_sum = 0;
        for (string _ : word_list)
        {
            if (isNumeric(_))
            {
                num_sum += stoi(_);
            }
        }
        cout << num_sum << endl;
    }
    
    return 0;
}
