#include<iostream>

using namespace std;

int num, Cont, divisor=0;
int main(){
	
	cout<<"Digite um numero";
	cin>>num;
	
	for(Cont=1; Cont<=num; Cont++){
		
		if(num%Cont==0){
			divisor++;
		}
		
	}
	
	if(divisor==2){
			cout<<"E primo";
		}else{
			cout<<"Nao eh primo";
		}
	
}
