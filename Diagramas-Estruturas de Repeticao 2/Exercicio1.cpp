#include<iostream>

using namespace std;

int Cont, idade, maior_dezoito;
int main(){
	Cont = 1;
	while(Cont<=10){
		
	  cout<<endl<<"Qual a sua idade?: ";
	  cin>>idade;
	  Cont++;
	  
	  if(idade>=18){
	  	maior_dezoito++;
	  } 
	  
	}
	cout<<"O numero de pessoas maiores de idade eh igual ah: "<<maior_dezoito;
}
