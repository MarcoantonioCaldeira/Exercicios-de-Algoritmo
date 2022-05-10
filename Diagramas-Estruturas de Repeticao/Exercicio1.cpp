#include<iostream>
#include <locale.h>

using namespace std;

int num1, num2, soma;
char resp;
int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	do{
		
		cout<<"Digite o primeiro numero: ";
		cin>>num1;
		
		cout<<"Digite o segundo numero: ";	
		cin>>num2;
		
		soma = num1 + num2;
		
		cout<<"A soma eh: "<<soma;
		
		
		cout<<"\n"<<"Deseja realizar outra operacao? [S/N]";
		cin>>resp;
		system("cls");
		
	}while (resp='N');
	

	return 0;
}
