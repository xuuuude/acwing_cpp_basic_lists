#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int V;
    cin >> V;
    int n[10];
    n[0] = V;
    for (int i = 1; i < 10; i++)
    {
        n[i] = n[i - 1] * 2;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}