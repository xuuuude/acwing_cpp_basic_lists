#include <iostream>
#include <stdio.h>
using namespace std;
//顺序表的翻转，双指针
int main()
{
    int a[20], b[20];
    for (int i = 0; i < 20; i++)
    {
        cin >> a[i];
    } //给数组 a[i] 赋值

    //倒序取出每个值，正着存到b中
    for (int i = 19, j = 0; i >= 0, j < 20; i--, j++)
    {
        b[j] = a[i]; //存到b中
    }

    //输出b
    for (int i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i, b[i]);
    }
    return 0;
}