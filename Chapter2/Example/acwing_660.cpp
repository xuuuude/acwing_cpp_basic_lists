#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double price[]={4.00,4.50,5.00,2.00,1.50};
	int x,y;
	cin>>x>>y;
	double sum;
	if(x==0){
		sum=y*price[x+1];
	}else sum = y*price[x-1];
	cout<<"Total: R$ "<<fixed<<setprecision(2)<<sum;
	

	return 0;
}
