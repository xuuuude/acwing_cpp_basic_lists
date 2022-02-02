#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;

	double delta = b*b-4*a*c;
	if(delta <0||a==0) cout<<"Impossivel calcular"<<endl;
	else {
		double x1,x2;
//	cout<<sqrt(delta)<<endl;
	
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);	
	printf("R1 = %.5lf\n",x1);
	printf("R2 = %.5lf\n",x2);	
	}

	return 0;
}
