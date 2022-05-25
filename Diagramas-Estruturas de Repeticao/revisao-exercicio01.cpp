#include<iostream>

using namespace std;

int num1, num2, soma;
char resposta;
int main(){
	
	do{
	
	 cout<<"Digite um numero: ";
	 cin>>num1;
	 
	 cout<<endl<<"Digite outro numero: ";
	 cin>>num2;
	 
	 soma = num1 + num2;
	 
	 cout<<endl<<"O resultado da soma eh: "<<soma;		
		
	 cout<<endl<<"Deseja fazer outra operacao?[S/N]: ";
	 cin>>resposta;
	 	
	}while(resposta=='S');
}
