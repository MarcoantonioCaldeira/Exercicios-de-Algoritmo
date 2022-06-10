#include<iostream>

using namespace std;

int MENU(float num1, float num2){
	int opcao;
	//Menu com as funcoes
	cout<<"ESCOLHA AS OPÇÕES ABAIXO";
	cout<<endl<<"1 - SOMA";
	cout<<endl<<"2 - SUBTRACAO";
	cout<<endl<<"3 - MULTIPLICAR";
	cout<<endl<<"4 - DIVIDIR";
	cin>>opcao;
	
	if(opcao == 1){
		int soma = num1 + num2;
		cout<<soma;	
	}else{
		if(opcao == 2){
			int subtrair = num1 - num2;
			cout<<subtrair;		
		}else{
			if(opcao == 3){
				int multiplicar = num1 * num2;	
				cout<<multiplicar;		
			}else{
				if(opcao == 4){
					float dividir = num1/num2;
					cout<<dividir;				
				}
			}
		}
	}
	return opcao;
}

main(){
	int numero1, numero2;//Declaracao dos dois valores
	
	cout<<"Digite um numero: ";
	cin>>numero1;
	
	cout<<"Digite um numero: ";
	cin>>numero2;
	
	MENU(numero1, numero2);//Pegar os dois valores e colocar na funcao
	
}
