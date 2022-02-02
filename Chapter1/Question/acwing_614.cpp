#include <iostream>
using namespace std;
int main(){
	long a,b,c;
	cin>>a>>b>>c;
	long max;
	max = a;
	if(max<b) max = b;
	if(max <c) max =c;
	cout<<max<<" eh o maior"<<endl;

	return 0;
}
