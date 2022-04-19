#include<iostream>

using namespace std;

double valor, quant, preco, total_pagar;
int main()
{
	cout<<"Digite a quantidade do produto: ";
	cin>>quant;
	
	cout<<"Digite o preco a pagar: ";
	cin>>preco;
	
	valor = quant * preco;
	cout<<"O valor a pagar eh igual ah: "<<valor<<"\n";
	
	if(quant<=5){
		
	   total_pagar = valor - 2;
	   cout<<"O total a pagar com desconto de 2% sera de: "<<total_pagar;
	   
	}else if(quant>5 && quant<=10){

		total_pagar = valor - 3;
		cout<<"O total a pagar com desconto de 3% sera de: "<<total_pagar; 
			
	}
	else if(quant>10){

		total_pagar = valor - 5;
		cout<<"O total a pagar com desconto de 5% sera de: "<<total_pagar;
			
	}
}
	
