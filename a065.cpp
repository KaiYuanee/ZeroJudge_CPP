#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    string alphabet_list;
    getline(cin, alphabet_list);
    for (int i = 0; i < 6; i++)
    {
        cout << abs(alphabet_list[i] - alphabet_list[i + 1]);
    }
    return 0;
}
