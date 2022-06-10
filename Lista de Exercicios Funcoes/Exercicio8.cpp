#include<iostream>

using namespace std;

int MENU(float num){
	int opcao;
	
	cout<<"ESCOLHA AS OPÇÕES ABAIXO";
	cout<<endl<<"1 - SOMA";
	cout<<endl<<"2 - SUBTRACAO";
	cout<<endl<<"3 - MULTIPLICAR";
	cout<<endl<<"4 - DIVIDIR";
	cin>>opcao;
	
	if(opcao == 1){
		int soma = num + num;
		cout<<soma;	
	}else{
		if(opcao == 2){
			int subtrair = num - num;
			cout<<subtrair;		
		}else{
			if(opcao == 3){
				int multiplicar = num * num;	
				cout<<multiplicar;		
			}else{
				if(opcao == 4){
					float dividir = num/num;
					cout<<dividir;				
				}
			}
		}
	}
	return opcao;
}

main(){
	int numero;
	
	cout<<"Digite um numero: ";
	cin>>numero;
	
	MENU(numero);
	
}
