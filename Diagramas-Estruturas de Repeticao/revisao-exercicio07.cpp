#include <stdio.h>
#include <iostream>

using namespace std;

int Cont, Divisores, Dividiu;
int main () {
	setlocale (LC_ALL,"Portuguese");
	
	//0 e 1 não são primos por definição
	cout << "0 não é primo!!" << endl;
	cout << "1 não é primo!!" << endl;
	cout << "2 é primo!!" << endl;
	for (Cont=3;Cont <= 50;Cont = Cont + 2){		
		Dividiu = 0;
		for (Divisores = 3; (Divisores <= Cont -1 /*&& Dividiu ==0*/); Divisores = Divisores + 2){
			if (Cont%Divisores == 0){ //EBA! Dividiu - NÃO É PRIMO!!
				Dividiu = 1;
     			cout << endl<< "O Cont vale: " << Cont << " e estou passando pelo Dividiu e Divisores: " << Divisores;	
			}
		}
		
		if (Dividiu == 0){ //Não achou divisores
			cout << endl << Cont << " é primo!!" << endl;	
		}
		else{
			cout << endl << Cont << " não é primo!!" << endl;	
		}
		
		cout << endl;

	}
	
	
	return 0;
}
