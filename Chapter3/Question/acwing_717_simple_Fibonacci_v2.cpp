// 以下数列 0 1 1 2 3 5 8 13 21 ... 被称为斐波纳契数列。

// 这个数列从第 3 项开始，每一项都等于前两项之和。

// 输入一个整数 N，请你输出这个序列的前 N 项。

#include <iostream>
using namespace std;
int main()
{
    int a[1000], n;
    cin >> n;
    a[0] = 0;
    a[1] = 1;
    if (n >= 1)
        cout << a[0] << " ";
    if (n >= 2)
        cout << a[1] << " ";
    for (int i = 2; i < n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
        cout << a[i] << " ";
    }

    return 0;
}