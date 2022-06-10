#include<iostream>

using namespace std;

int Verificacao_numero(int num){
	
	if(num>=0 && num<=10){
		cout<<'0';
	}else{
		if(num>=11){
			cout<<'1';	
		}
	}
	return num;
}


main(){
	int numero=0;
	
   	cout<<"Digite um numero: ";
   	cin>>numero;
   	
    Verificacao_numero(numero);
   	
   	cout<<Verificacao_numero;
   	
}
