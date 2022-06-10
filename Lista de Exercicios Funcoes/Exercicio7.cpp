#include<iostream>

using namespace std;

float METADE(float valor){
	  float metade_valor = valor/2;
	  return metade_valor;	
}


main(){
	float num1, num2, valor1, valor2;
	
	cout<<"Digite o primeiro valor: ";
	cin>>num1;
	
	cout<<"Digite o segundo valor: ";
	cin>>num2;
	
	valor1 = METADE(num1);
	valor2 = METADE(num2);
	cout<<"A metade do primeiro valor eh: "<<valor1;
	cout<<endl<<"A metade do segundo valor eh: "<<valor2;
}
