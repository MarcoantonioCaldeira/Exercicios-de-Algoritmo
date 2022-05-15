#include<iostream>

using namespace std;


int Cont, soma;
int main(){
	setlocale(LC_ALL,"Portuguese");
    
    Cont=0;
	while(Cont<=100)
	{
		
		if(Cont%2 == 0)
		{
			soma = soma + Cont;
			cout<<soma<<"\n";
		}
	    
		Cont++;
	}	

}
