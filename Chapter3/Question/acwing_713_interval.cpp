#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int x;
	int count_in = 0,count_out=0;
	
	while (n--){// a method to accomplish looping for n times
		cin>>x;
		if(x>=10&&x<=20) 	{
			count_in++;
		}
		else {
			count_out++;
		}
	}
	cout<<count_in<<" in"<<endl;
	cout<<count_out<<" out"<<endl;
	
	return 0;
}
