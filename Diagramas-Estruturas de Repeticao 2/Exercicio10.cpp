#include<iostream>

using namespace std;

int n, Cont, aux, soma;
int main(){
	
	cout<<"Digite um numero: ";
	cin>>n;
	
	Cont=1;
	while(Cont<n)
	{
		
		if(n%Cont==0)
		{
			aux += Cont;	
    	}
		
		Cont++;
	}
	
	if(aux == n){
		cout<<"Numero perfeito";
	}else{
		cout<<"Nao eh perfeito";
	}
}
