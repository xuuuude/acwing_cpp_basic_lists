#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double r,pi = 3.14159,s;
	cin>>r;
	s = pi*r*r;
	
	cout<<"A="<<fixed<<setprecision(4)<<s<<endl;
	
	return 0;
}
