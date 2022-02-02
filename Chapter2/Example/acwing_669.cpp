#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	double salary;
	double x,y;
	int z;
	cin>>salary;
	if(salary>=0 && salary<=400.00)
	{
		x = salary*(1+0.15);
		y = salary*0.15;
		z = 15;
		cout<<"Novo salario: "<<fixed<<setprecision(2)<<x<<endl;
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<y<<endl;
		cout<<"Em percentual: "<<z<<" %"<<endl;
	}
	else if(salary>400.00 && salary <=800.00){
		x = salary*(1+0.12);
		y = salary*0.12;
		z = 12;
		cout<<"Novo salario: "<<fixed<<setprecision(2)<<x<<endl;
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<y<<endl;
		cout<<"Em percentual: "<<z<<" %"<<endl;
		
	}
	else if (salary >800 && salary<=1200.00){
		x = salary*(1+0.10);
		y = salary*0.10;
		z = 10;
		cout<<"Novo salario: "<<fixed<<setprecision(2)<<x<<endl;
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<y<<endl;
		cout<<"Em percentual: "<<z<<" %"<<endl;
	}
	else if(salary >1200.00 && salary<=2000.00)
{
	x = salary*(1+0.07);
		y = salary*0.07;
		z = 7;
		cout<<"Novo salario: "<<fixed<<setprecision(2)<<x<<endl;
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<y<<endl;
		cout<<"Em percentual: "<<z<<" %"<<endl;
}
else if(salary>2000.00){
	x = salary*(1+0.04);
		y = salary*0.04;
		z = 4;
		cout<<"Novo salario: "<<fixed<<setprecision(2)<<x<<endl;
		cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<y<<endl;
		cout<<"Em percentual: "<<z<<" %"<<endl;
}
	return 0;
}
