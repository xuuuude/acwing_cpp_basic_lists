#include <iostream>
using namespace std;
int main(){
	double a,b,c;
	cin>>a>>b>>c;
	
	//sort
	if(b>a){
		double t = a;
		a=b;
		b = t;
	}// a>b
	if(c>a){
		double t = a;
		a = c;
		c = t;
	}
	if(c>b){
		double t = c;
		c = b;
		b = t;
	}
	if(a>=b+c) cout<<"NAO FORMA TRIANGULO"<<endl;
	else{
		if(a*a==b*b+c*c) cout<<"TRIANGULO RETANGULO"<<endl;
		if(a*a>b*b+c*c) cout<<"TRIANGULO OBTUSANGULO"<<endl;
		if(a*a<b*b+c*c) cout<<"TRIANGULO ACUTANGULO"<<endl;
		if(a==b&&b==c) cout<<"TRIANGULO EQUILATERO"<<endl;
		else if(a==b||b==c||a==c) cout<<"TRIANGULO ISOSCELES"<<endl;
	}	

	return 0;
}
