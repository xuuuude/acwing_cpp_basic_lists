#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        int sum = 0;
        for (int i = 1; i < sqrt(x); i++)
        {
            if (x % i == 0)
                sum += i;
        }
        if (sum == x)
            cout << x << " is perfect" << endl;
        else
            cout << x << " is not perfect" << endl;
    }
    return 0;
}