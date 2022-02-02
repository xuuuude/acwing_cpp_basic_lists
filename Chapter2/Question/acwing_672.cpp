#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double x;
	cin>>x;
	if(x>0&&x<=2000.00){
		cout<<"Isento"<<endl;
	}
	else if(x>2000.00&&x<=3000.00) printf("R$ %.2lf",(x-2000.00)*0.08);
	else if(x>3000.00&&x<=4500.00) printf("R$ %.2lf",(x-3000.00)*0.18+1000*0.08);
	else if(x>4500.00) printf("R$ %.2lf",(x-4500.00)*0.28+1000*0.08+1500*0.18);
	return 0;
}
