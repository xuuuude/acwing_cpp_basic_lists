#include <iostream>
using namespace std;
int main(){
	int a,b;
	int x;
	cin>>a>>b;
	if(a>b) {
		x = b+24-a;
	}
	else if(a<b) {
		x = b-a;
	}
	else if(a=b) {
		x = 24;
	}
	
	cout<<"O JOGO DUROU "<<x<<" HORA(S)";
	

	return 0;
}
