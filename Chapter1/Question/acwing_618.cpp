#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int h;
	long v;
	double x;
	cin>>h>>v;
	x = h*v;
	cout<<fixed<<setprecision(3)<<x/12;
	return 0;
}
