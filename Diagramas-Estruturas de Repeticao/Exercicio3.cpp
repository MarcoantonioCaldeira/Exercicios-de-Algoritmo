#include<iostream>
#include <locale.h>

using namespace std;

int num_inicio, num_fim, Cont;
int main()
{
	setlocale (LC_ALL,"Portuguese");
	
	cout<<"Digite o numero de inicio";
	cin>>num_inicio;
	
	cout<<"Digite o numero de fim";
	cin>>num_fim;
	
	Cont=num_inicio;
	
	while(Cont<=num_fim)
	{
		cout<<Cont<<"\n";
		Cont = Cont + 2;
	}
}
