#include <iostream>
using namespace std;

void swap(int *p,int *q){
	int temp = *q;
	*q = *p;
	*p = temp;
}

int main(){
	//int a,b,c;
	int nums_orig[3]={};//oringinal array
	int nums_sorted[3]={};// sort array
	for(int i =0;i<=2;i++){
		cin>>nums_orig[i];
		nums_sorted[i]=nums_orig[i];//data be forked to sort array
	}
	if(nums_sorted[0]>nums_sorted[1]) swap(nums_sorted[0],nums_sorted[1]);
	if(nums_sorted[0]>nums_sorted[2]) swap(nums_sorted[0],nums_sorted[2]);
	if(nums_sorted[1]>nums_sorted[2]) swap(nums_sorted[1],nums_sorted[2]);
 	
 	for(int i = 0;i<=2;i++){
 		cout<<nums_sorted[i]<<endl;
	 }
 	cout<<" "<<endl;
 	for(int i =0;i<=2;i++){
 		cout<<nums_orig[i]<<endl;
	 }
 	
	return 0;
}
