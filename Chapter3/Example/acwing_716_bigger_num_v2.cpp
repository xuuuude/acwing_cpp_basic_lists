#include <iostream>
using namespace std;
int main(){
	int max_value=0,value,position=0;
	for(int i =0;i<100;i++){
		cin>>value;
		
		if(value>max_value) {
			max_value = value;
			position = i+1;
		}
	}

	cout<<max_value<<endl;
	cout<<position<<endl;
	


	return 0;
}
