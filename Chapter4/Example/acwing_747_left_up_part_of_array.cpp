#include <iostream>
using namespace std;
int main()
{
    double M[12][12];
    char t;
    cin >> t;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> M[i][j];
        }
    }

    double s = 0;                // sum of array_blocks
    int c = 0;                   // number of blocks
    for (int i = 0; i < 12; i++) //看图可知，当i从0开始，终点在10-0，
    // i=1,终点等于10-1=9，也就是说j的活动范围从0到9，
    //一个特例：当i等于11时，看图，此时的j可以定义为-1.
    //换言之，i从0开始依次增加直到小于12，j从0开始到10-i；
    {
        for (int j = 0; j <= 10 - i; j++)
        {
            c++;
            s += M[i][j];
        }
    }

    if (t == 'S')
    {
        printf("%.1lf\n", s);
    }
    else
        printf("%.1lf\n", s / c);
    return 0;
}