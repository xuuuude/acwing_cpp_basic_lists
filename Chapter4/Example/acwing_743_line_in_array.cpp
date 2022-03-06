#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    double a[12][12];                //定义二维数组
    int l;                           //求第l行
    char t;                          //判断求和还是求平均数
    scanf("%d\n%c", &l, &t);         //输入l和t //scanf 输入有坑。
    for (int i = 0; i < 12; i++)     //给数组赋值
        for (int j = 0; j < 12; j++) // i从0开始算，所以是小于12，不带等号
            scanf("%lf", &a[i][j]);
    double s = 0; //求和初值
    for (int i = 0; i < 12; i++)
        s += a[l][i]; //不明白
    if (t == 'S')
        printf("%.1lf\n", s);
    else
        printf("%.1lf\n", s / 12);

    return 0;
}