#include<iostream>

using namespace std;

int Cont,num, Ant=0, Atual=1, Prox;
int main(){
	
	cout<<"Digite um numero: ";
	cin>>num;
	
	for(Cont=1; Cont<=num; Cont++){
		
		if(Cont==1){
			cout<<"0";
		}else{
			if(Cont==2){
				cout<<"1";
			}else{
				Prox = Ant + Atual;
				Ant = Atual;
				Atual = Prox;
				cout<<Prox;
			}
		}
		
	}
}
