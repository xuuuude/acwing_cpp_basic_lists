#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double a,b,x;
	cin>>a>>b;
	x = (a*3.5+b*7.5)/11;
	cout<<"MEDIA = "<<fixed<<setprecision(5)<<x<<endl;
	return 0;
}
