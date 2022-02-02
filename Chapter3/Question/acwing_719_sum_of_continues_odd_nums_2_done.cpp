#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int x,y;
	cin>>x>>y;
	while(n--){
		if(x>y){
			int temp= y;
			y = x;
			x = temp;
		}
	
	int sum = 0;
	
	for(int i =x+1;i<y;i++){
		if(i%2==0 || i%2 ==-1) sum+=i;
	}

	cout<<sum<<endl;			
	}


		
	

	return 0;
}
