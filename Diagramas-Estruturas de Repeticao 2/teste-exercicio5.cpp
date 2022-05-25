#include<iostream>

using namespace std;

int num, Cont, divisor=0, Cont_num;//Declarando variaveis
int main(){
	
	for(Cont_num=1; Cont_num<=10; Cont_num++){//Agora ao inves de ser so um ele ira verificar 10 numeros
		
		cout<<"Digite um numero: ";
	    cin>>num;//Ira Digitar o numero que sera verificado
		
		Cont=1;
    	while(Cont<=num){
		
			if(num%Cont==0){
				divisor++;
			}
		 	Cont++;	
	    }
	    
	    if(divisor==2){
			cout<<"E primo";
	    }else{
			cout<<"Nao eh primo";
		}
		
	}
	
}
