#include <iostream>
using namespace std;
int main(){
	double nums[6];
	for(int i =0;i<=5;i++){
		cin>>nums[i];
	}
	int count = 0;
	for(int i=0;i<=5;i++){
		if(nums[i]>0) count++;
	}
	cout<<count<<" positive numbers"<<endl;
	return 0;
}
