#include <iostream>
using namespace std;
int main(){
	
	double n1,n2,n3,n4;
	cin>>n1>>n2>>n3>>n4;
	double x = 0;
	x = (n1*2+n2*3+n3*4+n4*1)/(1+2+3+4);
	cout<<"Media: "<<x<<endl;
	if(x>=7.00) cout<<"Aluno aprovado."<<endl;
	if(x<5.00) cout<<"Aluno reprovado."<<endl;
	if(x>=5.00&&x<7.00) {
		cout<<"Aluno em exame."<<endl;
		double y=0;
		cin>>y;
		cout<<"Nota do exame: "<<y<<endl;
		double z=0;
		z = (x+y)/2;
		if(z>=5.00) cout<<"Aluno aprovado."<<endl;
		else cout<<"Aluno reprovado."<<endl;
		cout<<"Media final: "<<z<<endl;
	}
	

	return 0;
}
