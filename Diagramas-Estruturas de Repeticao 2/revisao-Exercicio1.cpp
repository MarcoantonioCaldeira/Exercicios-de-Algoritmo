#include<iostream>

using namespace std;

int idade, Cont, cont_idade;
int main(){
	
	Cont=1;
	while(Cont<=3){
		cout<<"Qual a sua idade: ";
		cin>>idade;
		
		if(idade>=18){
			cont_idade++;
		}	
		Cont++;
	}
	cout<<"O numero de pessoas maiores de idade eh igual ah: "<<cont_idade;
	
}
