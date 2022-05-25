#include<iostream>

using namespace std;

int num_comeco, num_fim, Cont, num_par;
int main(){
	
	cout<<"Digite um numero de comeco: ";
	cin>>num_comeco;
	
	cout<<"Digite um numero de fim: ";
	cin>>num_fim;
	
	Cont = num_comeco;
	while(Cont<=num_fim){
		
		if(Cont%2 ==0){
			cout<<endl<<Cont;
			num_par++;
		}
		Cont++;
	}
	cout<<endl<<"Os numeros pares entre "<<num_comeco<<" e "<<num_fim<<" sao: "<<num_par;
}
