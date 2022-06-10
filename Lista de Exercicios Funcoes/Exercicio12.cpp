#include<iostream>

using namespace std;

void ESTACAO( int dia, int mes){
	
	if(dia == 21 && mes == 12){
		cout<<"Verao";
	}else{
		if(dia == 23 && mes == 9){
			cout<<"Primavera";
		}else{
			if(dia == 21 && mes == 3){
				cout<<"Outono";
			}else{
				if(dia == 21 && mes == 6){
					cout<<"Inverno";
				}
			}
		}
	}
}


main(){
	int dia_mes, numero_mes;
	
	cout<<"Digite o dia do mes: ";
	cin>>dia_mes;
	
	cout<<"Digite o numero do mes: ";
	cin>>numero_mes;
	
	ESTACAO(dia_mes, numero_mes);
}
