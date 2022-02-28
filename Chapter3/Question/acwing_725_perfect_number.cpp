#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;

        int s = 0;
        for (int i = 1; i * i <= x; i++)
        {
            if (x % i == 0) //找出前一半合法的i
            {
                if (i < x)                   //将所有小于x的i全找到
                    s += i;                  //计算他们的和
                if (i != x / i && x / i < x) //根据前一半的i值，挨个计算后一半的因子，
                                             //如果i和x/i相等了、并且此时x/i小于x，那么说明当前的i值和与之对应的i值是一样的，则只能计算一次。
                                             //所以遇到这种i的话，就不能参与下面加和的运算
                    s += x / i;              //依次加上后面的因子
            }
        }
        if (s == x)
            printf("%d is perfect\n", x);
        else
            printf("%d is not perfect\n", x);
    }

    return 0;
}