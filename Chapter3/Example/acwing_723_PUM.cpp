#include <iostream>
using namespace std;
int main(){
	int n=0,m=0;
	cin>>n>>m;
	for(int i =1;i<=n*m;i++){
		if(i%m==0) cout<<"PUM"<<endl;
		else {
		cout<<i<<" ";
		}
	}
	

	return 0;
}
