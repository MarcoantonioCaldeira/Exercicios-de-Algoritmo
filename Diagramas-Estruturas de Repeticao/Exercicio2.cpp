#include<iostream>
#include <locale.h>

using namespace std;

int num, Cont;
int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	//Digitar o numero que o contador ira come�ar a contar
	cout<<"Digite um numero: ";
	cin>>num;
	
	//O contador ira receber o numero digitado
	Cont = num;
	
	//A contagem come�ara do Contador e ira at� o 100
	while(Cont<=100)
	{
		cout<<Cont<<"\n";
		Cont++;
	}
	return 0;
}
