#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    if (a * e == b * d)
    {
        if (b * f == c * e)
        {
            printf("Too many");
        }
        else
        {
            printf("No answer");
        }
        return 0;
    }
    float x, y;
    x = (float)(c * e - b * f) / (float)(a * e - b * d);
    y = (float)(a * f - c * d) / (float)(a * e - b * d);
    printf("x=%.2f\ny=%.2f", x, y);
    return 0;
}
