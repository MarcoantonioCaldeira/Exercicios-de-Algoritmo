#include <iostream>

using namespace std;


main ()
{
    int num[10], x;
	for (x=0;x<11;x++) //Entrada de dados
	{
	 cout<<"Digite um número: ";
	 cin>>num[x];
	}
	
	cout<<"\n Os numeros digitados foram: ";
	
	for (x=0;x<10;x++) //Impressão dos dados
	{
	 cout<< num[x] << endl;
	}
 }
