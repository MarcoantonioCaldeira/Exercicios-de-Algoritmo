#include <iostream>

using namespace std; 

main ()
{
	int v[5];
	int i, cont;
	cont=10;
	for (i=0;i<5;i++)
	{
	 v[i]=cont;
	 cont++;
	 cout<<endl<<"posicao "<<i<<": "<<cont;
	}
 
}
