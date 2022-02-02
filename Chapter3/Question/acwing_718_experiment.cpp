#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;//times of experiment
	cin>>n;
	int k;
	char u;
	int c = 0,r = 0,f = 0;
	for(int i =0;i<n;i++){
		cin>>k>>u;
		if(u == 'C') c+=k;
		if(u == 'R') r+=k;
		if(u == 'F') f+=k;
	}
	int s = c+r+f;
	printf("Total: %d animals\n",s);
	printf("Total coneys: %d\n",c);
	printf("Total rats: %d\n",r);
	printf("Total frogs: %d\n",f);
	
	double c_p = (double)c/s*100.00;//a method is solving percentage_problems 
	double r_p = (double)r/s*100.00;
	double f_p = (double)f/s*100.00;
	
	
	printf("Percentage of coneys: %.2lf %%\n",c_p);
	printf("Percentage of rats: %.2lf %%\n",r_p);
	printf("Percentage of frogs: %.2lf %%\n",f_p);
	
	
	
	return 0;
}
