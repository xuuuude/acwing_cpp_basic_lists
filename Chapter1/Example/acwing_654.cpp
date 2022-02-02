#include <iostream>
using namespace std;
int main(){
	long n;//continue_times by second
	int hours =0;
	int mins = 0;
	int seconds =0;
	cin>>n;
	hours= n/3600;
	//cout<<hours<<endl;
	mins = n%3600/60;
	//cout<<mins<<endl;
	seconds = n%3600%60/1;
	//cout<<seconds<<endl;
	cout<<hours<<":"<<mins<<":"<<seconds<<endl;

	return 0;
}
