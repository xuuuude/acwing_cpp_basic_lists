#include <iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int game_time;
	game_time = (c*60+d)-(a*60+b);
	int x,y;
	if(game_time>0){
		x = game_time/60;
	 y = game_time%60;
	}
	else if(game_time<=0){
		game_time+=1440;
		 x = game_time/60;
		 y = game_time%60;
	}

	
	
	
cout<<"O JOGO DUROU "<<x<<" HORA(S) E "<<y<<" MINUTO(S)"<<endl;

	return 0;
}
