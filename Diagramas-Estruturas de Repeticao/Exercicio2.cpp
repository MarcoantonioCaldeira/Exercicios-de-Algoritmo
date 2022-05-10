#include<iostream>
#include <locale.h>

using namespace std;

int num, Cont;
int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	//Digitar o numero que o contador ira começar a contar
	cout<<"Digite um numero: ";
	cin>>num;
	
	//O contador ira receber o numero digitado
	Cont = num;
	
	//A contagem começara do Contador e ira até o 100
	while(Cont<=100)
	{
		cout<<Cont<<"\n";
		Cont++;
	}
	return 0;
}
