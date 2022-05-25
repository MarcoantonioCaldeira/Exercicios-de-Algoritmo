#include<iostream>

using namespace std;

int Cont, num, soma;
int main(){
	
	Cont = 1;
	do{
		cout<<"Digite um numero: ";
		cin>>num;
		Cont++;
	}while(Cont<=5);
	
	if(num != 0){
		soma = (num + num + num + num + num);
		cout<<soma;
	}else{
		cout<<"programa encerrado";
	}
	
}


