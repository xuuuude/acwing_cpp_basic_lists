#include <iostream>
using namespace std;
int main()
{
    double M[12][12];
    char t;
    cin>>t;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin>>M[i][j];
        }
    }
    double s = 0;
    int c = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j <11-i ; j++)
        {
            s+=M[i][j];
            c++;
        }
        
    }
    if (t=='S') printf("%.1lf",s);
    else printf("%.1lf",s/c);
    

    return 0;
}
//求二维数组区域和的问题，首先确定i的范围，其次确定i的起点和终点，即j。即可。