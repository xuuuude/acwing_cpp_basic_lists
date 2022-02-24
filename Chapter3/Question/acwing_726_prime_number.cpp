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
        int i = 2;
        for (; i * i <= x; i++)
        {
            if (x % i == 0)
                break;
        }
        if (i * i > x)
            cout << x << " is prime" << endl;
        else
            cout << x << " is not prime" << endl;
    }

    return 0;
}