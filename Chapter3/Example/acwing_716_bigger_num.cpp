#include <iostream>
using namespace std;
int main(){
	int nums[100];
	int nums_sort[100];
	for(int i=0;i<100;i++){
		cin>>nums[i];
		nums_sort[i]=nums[i];
	}
	for(int i =0;i<100-1;i++){
		for(int j =0;j<100-i-1;j++){
			if(nums_sort[j]>nums_sort[j+1]){
				int temp = nums_sort[j+1];
				nums_sort[j+1] = nums_sort[j];
				nums_sort[j] = temp;
			}
		}
	}
	cout<<nums_sort[99]<<endl;
	
	for(int i =0;i<100;i++){
		if(nums[i]==nums_sort[99]) cout<<i+1<<endl;
	}

	return 0;
}
