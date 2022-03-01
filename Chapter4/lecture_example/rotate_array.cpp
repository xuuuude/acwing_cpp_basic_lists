#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, k; // n表示n个数字
    // k表示旋转k次
    cin >> n >> k;

    int a[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    //数组初始化

    while (k--) //开始旋转，每旋转一次，k值-1
    {
        int t = a[n - 1];                //提前保存数组中最后一个数
        for (int i = n - 2; i >= 0; i--) //将数组中其他数字依次向后挪一位
        {
            a[i + 1] = a[i];
        }         //放完后，后半段已经挪好，誊出第一个位置a[0],
        a[0] = t; //
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}