#include <iostream>
using namespace std;
int main(){
	int a,n=0;//n要赋初值
	cin>>a;
	while(n<=0){//对n的处理，先输入n，如果n<=0，也就是说 while 条件为真
		cin>>n;//就进入下一次循环，也就是重新输入n的值
	}
	int sum = 0;
	for(int i =a;i<a+n;i++){
		sum+=i;
	}
	cout<<sum<<endl;
	return 0;
}
