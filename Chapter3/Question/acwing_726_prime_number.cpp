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
        int i = 2;             //除数从2开始
        for (; i * i < x; i++) //带等号，x可能会等于i平方，例如x=36，i=6的时候
                               //不带等号在 acwing 上也能 AC
        {
            if (x % i == 0)
                break;
            //当x取余i为0时，说明此时输入的x不是素数，break掉当前循环
        } //进入下面的if-else 进行判断
        if (i * i > x)
            printf("%d is prime\n", x);
        else
            printf("%d is not prime\n", x);
    }

    return 0;
}