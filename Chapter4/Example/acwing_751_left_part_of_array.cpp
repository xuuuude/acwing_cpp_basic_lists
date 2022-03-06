#include <iostream>
using namespace std;
int main()
{
    double M[12][12];
    char t;
    scanf("%c", &t);
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }
    double s = 0;
    int c = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            s += M[i][j];
            c++;
        }
    }

    for (int i = 6; i <= 10; i++)
    {
        for (int j = 0; j <= 10 - i; j++) //为什么j的初值从0开始，而不是从i
        {
            s += M[i][j];
            c++;
        }
    }

    if (t == 'S')
    {
        printf("%.1lf", s);
    }
    else
        printf("%.1lf", s / c);

    return 0;
}