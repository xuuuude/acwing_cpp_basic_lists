#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	long id,nums;
	double price,x=0;
	for(int i =0;i<=1;i++){
		cin>>id>>nums>>price;
		x=x + nums*price;
	}
	cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<x<<endl;
	return 0;
}
