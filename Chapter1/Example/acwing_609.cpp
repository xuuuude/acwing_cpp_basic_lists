#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int id,time;
	double wage;
	double salary;
	cin>>id>>time>>wage;
	salary = time*wage;
	
	cout<<"NUMBER = "<<id<<endl;
	cout<<"SALARY = U$ " <<fixed<<setprecision(2)<<salary<<endl;
	
	return 0;
}
