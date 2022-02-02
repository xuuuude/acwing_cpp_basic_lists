#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int x;
	double y;
	double m;
	cin>>x>>y;
	m = x/y;
	cout<<fixed<<setprecision(3)<<m<<" km/l"<<endl;
	return 0;
}
