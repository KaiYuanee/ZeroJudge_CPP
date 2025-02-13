#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool isLeapYear(int year)
{
    return ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)));
}

int daysFromStartOfYear(int year, int month, int day)
{
    vector<int> daysInMonth = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year))
    {
        daysInMonth[1] = 29;
    }
    int days = 0;
    for (int i = 0; i < month - 1; i++)
    {
        days += daysInMonth[i];
    }
    days += day;
    return days;
}

int daysFromStartOfCE(int year, int month, int day)
{
    int leap_years = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    int days = (year - 1) * 365 + leap_years + daysFromStartOfYear(year, month, day);
    return days;
}

int main()
{
    int year1, month1, day1, year2, month2, day2;
    while (cin >> year1 >> month1 >> day1 >> year2 >> month2 >> day2)
    {
        cout << abs(daysFromStartOfCE(year1, month1, day1) - daysFromStartOfCE(year2, month2, day2)) << endl;
    }
    return 0;
}
