#include<iostream>

using namespace std;

int Cont, soma_num;
int main(){
	
	Cont=1;
	while(Cont<=100){
		
		if(Cont%2 == 0){
			//cout<<endl<<Cont;
			soma_num = Cont + soma_num;
		    cout<<endl<<soma_num;
		}
		Cont++;
	}
}
