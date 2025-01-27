#include <iostream>
#include <string>
#include <sstream>
#include <unordered_map>
#include <vector>
#include <cmath>

using namespace std;

int roman_to_arabic(string roman_num)
{
    unordered_map<char, int> roman_values = {
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    int arabic_num = 0, n = roman_num.size();
    for (int i = 0; i < n; i++)
    {
        int current_value = roman_values[roman_num[i]], next_value;
        if (i + 1 < n)
        {
            next_value = roman_values[roman_num[i + 1]];
        }
        else
        {
            next_value = 0;
        }
        if (current_value < next_value)
        {
            arabic_num -= current_value;
        }
        else
        {
            arabic_num += current_value;
        }
    }
    return arabic_num;
}

string arabic_to_roman(int arabic_num)
{
    vector<pair<int, string>> roman_map = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};
    string roman_num = "";
    for (size_t i = 0; i < roman_map.size(); i++)
    {
        int value = roman_map[i].first;
        string symbol = roman_map[i].second;
        while (arabic_num >= value)
        {
            arabic_num -= value;
            roman_num += symbol;
        }
    }
    return roman_num;
}

int main()
{
    while (1)
    {
        string text, roman_num1, roman_num2;
        getline(cin, text);
        if (text == "#")
        {
            break;
        }
        istringstream iss(text);
        iss >> roman_num1 >> roman_num2;
        int num1 = roman_to_arabic(roman_num1), num2 = roman_to_arabic(roman_num2);
        int margin = abs(num1 - num2);
        if (margin == 0)
        {
            cout << "ZERO" << endl;
        }
        else
        {
            cout << arabic_to_roman(margin) << endl;
        }
    }
    return 0;
}
