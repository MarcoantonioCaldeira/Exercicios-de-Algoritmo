#include<iostream>

using namespace std;

int num, Cont, divisor=0;//Declarando variaveis
int main(){
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
