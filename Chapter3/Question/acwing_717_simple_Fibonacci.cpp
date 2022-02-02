#include <iostream>
using namespace std;



int fib(n){
	fib(0) = 0;
	fib(1) = 1;
	fib(2) = 1;	
	fib(n)=fib(n-1)+fib(n-2);
	return 0;
}

int main(){
	int n;
	cin>>n;
	while (n--){
		fib(n);
		for(int i =4;i<=n;i++){
		cout<<fib(i)<<endl;
	}
}
	
//	fib(n);

	return 0;
}
