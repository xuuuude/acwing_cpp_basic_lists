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
    double s = 0; //表示block的总和

    int c = 0; //表示block的个数
    for (int i = 0; i < 12; i++)
    {
        for (int j = i + 1; j < 12; j++) //寻找符合条件的block
                                         //二维数组中，每个元素所在位置都是一个block
                                         //主对角线上方的block都符合，在第i行时，只有第i个是不要的，
                                         //从i+1个开始直到第j列都是符合要求的。
                                         //所以考虑一个二重循环，让i自增
                                         //内部用j获取第i+1开始直到当前行的最后一列（也就是j+1列）
        {
            s += M[i][j]; //获取总和
            c++;          //每找到一个block，c就加一
        }
    }

    if (t == 'S')
        printf("%.1lf", s);
    else
        printf("%.1lf", s / c);

    return 0;
}