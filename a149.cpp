#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;
    cin.ignore();
    for (int i = 0; i < T; i++)
    {
        string n;
        int result = 1;
        getline(cin, n);
        for (char c : n)
        {
            if (c == '0')
            {
                result = 0;
                break;
            }
            result *= c - '0';
        }
        cout << result << endl;
    }
    return 0;
}
