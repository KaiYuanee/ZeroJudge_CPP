#include <iostream>
#include <sstream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int p[4], n, i[4];
    string line;
    while (getline(cin, line))
    {
        if (line.empty())
        {
            continue;
        }
        stringstream ss(line);
        ss >> p[0] >> p[1] >> p[2] >> p[3];
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int A = 0, B = 0, p_count[10] = {0}, i_count[10] = {0};
            cin >> i[0] >> i[1] >> i[2] >> i[3];
            for (int k = 0; k < 4; k++)
            {
                if (p[k] == i[k])
                {
                    A++;
                }
                else
                {
                    p_count[p[k]]++;
                    i_count[i[k]]++;
                }
            }
            for (int k = 0; k < 10; k++)
            {
                B += min(p_count[k], i_count[k]);
            }
            cout << A << 'A' << B << 'B' << "\n";
        }
    }
    return 0;
}
