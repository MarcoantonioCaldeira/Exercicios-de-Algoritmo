#include<iostream>

using namespace std;

int Verifica_idade(int idade){

	int idade_meses = (idade * 12);
	
	int idade_em_dias = (idade * 360);
	
	cout<<"Sua idade em meses eh: "<<idade_meses<< " meses";
	
	cout<<endl<<"Sua idade em dias eh: "<<idade_em_dias<<" dias";
	
	return idade;
}


main(){
	int idade, resultado;
	
	cout<<"Digite a sua idade: ";
	cin>>idade;
	
	resultado = Verifica_idade(idade);
	cout<<resultado;	
}
