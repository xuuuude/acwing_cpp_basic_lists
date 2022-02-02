#include <iostream>
using namespace std;
int main(){
	int x;
	while( true){//利用一个死循环，实现一直输入x的操作
		cin>>x;//将输入x写到死循环里面
		if(!x) break;//如果x是0，就break。等价于 if(x==0) break;
		for(int i =1;i<=x;i++) cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}