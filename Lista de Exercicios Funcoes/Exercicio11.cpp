#include<iostream>

using namespace std;

int VERIFICACAO(int num1, int num2){
	
	if(num1 && num2 >= 1){
		cout<<'1'<<" positivo";
	}else{
		if(num1 && num2 < 0){
			cout<<'0'<<" negativo";
		}else{
			if(num1 && num2 == 0){
				cout<<'-1'<<" igual a 0";
			}
		}
	}
}

int SOMA(int num1, int num2){
	
	int soma = num1 + num2;
	cout<<endl<<soma;
	return soma;
}

main(){
	int numero1, numero2;
	
	cout<<"Digite o primeiro numero: ";
	cin>>numero1;
	
	cout<<"Digite o segundo numero: ";
	cin>>numero2;
	
	VERIFICACAO(numero1, numero2);
	SOMA(numero1, numero2);
}
