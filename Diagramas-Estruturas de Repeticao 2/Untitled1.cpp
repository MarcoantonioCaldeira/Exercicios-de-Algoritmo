#include<iostream>

using namespace std;

int Cont, num, quant_valor, maior, menor;
int main(){
	
	cout<<"Digite a quantidade de valores: ";
	cin>>quant_valor;
	
	Cont=1;
	while(Cont<=quant_valor){
		
		cout<<"Digite um numero";
		cin>>num;
		
		if(num<=0){
			cout<<endl<<"Esses valores nao sao permitidos";
		}
		
		if(Cont==1){
			maior=num;
			menor=num;
	    }else{
	    	if(num>maior){
	    		maior=num;
			}else{
				if(num<menor){
					menor=num;
				}
			}
		}
		
	Cont++;	
	}
	cout<<endl<<"O maior numero eh: "<<maior;
	cout<<endl<<"O menor numero eh: "<<menor;
}
