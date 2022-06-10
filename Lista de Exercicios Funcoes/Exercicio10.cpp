#include<iostream>

using namespace std;

int DOBRO(int num1, int num2, int num3){
	int valor_dobro1 = num1 + num1;
	int valor_dobro2 = num2 + num2;
	int valor_dobro3 = num3 + num3;
	
	cout<<valor_dobro1;
	cout<<endl<<valor_dobro2;
	cout<<endl<<valor_dobro3;
}

main(){
	int numero1, numero2, numero3;
	
	cout<<"Digite um numero: ";
	cin>>numero1;
	
	cout<<"Digite um numero: ";
	cin>>numero2;
	
	cout<<"Digite um numero: ";
	cin>>numero3;
	
	DOBRO(numero1, numero2, numero3);
}
