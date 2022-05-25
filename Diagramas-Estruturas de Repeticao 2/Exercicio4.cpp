#include<iostream>
using namespace std;

int num, Cont, divisor=0;
int main(){
		
		cout<<"Digite um valor: ";
	    cin>>num;
	
	    for(Cont=1; Cont<=num; Cont++){//Ira Contar ate o numero digitado
	  
		    if(num%Cont==0){//Ira varificar a quantidade de divisores que o numero possui
		      divisor++;//Ira contar a quantidade de divisores que o numero possui
		    }
	    } 	
	 
	if(divisor==2){//Ira verificar se a quantidade de divisores e dois(1 e ele mesmo)
	  cout<<"E primo";//Vai mostrar se o numero eh primo
	}else{
	  cout<<"Nao eh primo";//Vai mostrar se o numero nao eh primo
	}
}
