#include <iostream>
using namespace std;
int main()
{
    int n[10];
    int length = sizeof(n) / sizeof(n[0]);
    // for (int i = 0; i < length; i++)
    // {
    //     cout << n[i] << endl;
    // }
    for (int i = 0; i < length; i++)
    {
        n[i] = 0;
    }

    for (int i = 0; i < length; i++)
    {
        cin >> n[i];
    }

    for (int i = 0; i < length; i++)
    {
        if (n[i] <= 0)
            n[i] = 1;
    }
    for (int i = 0; i < length; i++)
    {
        printf("X[%d]", i);
        cout << " = " << n[i] << endl;
    }

    return 0;
}