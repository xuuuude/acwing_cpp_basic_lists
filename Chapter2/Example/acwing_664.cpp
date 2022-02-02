#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	if( a+b>c && a+c>b && b+c>a)
	{
		cout<<"Perimetro = "<<a+b+c;
	}
	else cout<<"Area = "<<fixed<<setprecision(1)<<(a+b)*c/2;

	return 0;
}
