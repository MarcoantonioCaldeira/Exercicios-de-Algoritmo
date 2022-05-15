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
	for (Cont=3;Cont <= 200; Cont = Cont = Cont+1){		
		Dividiu = 0;
		for (Divisores = 3; (Divisores <= Cont -1 && Dividiu ==0); Divisores = Divisores + 1){
			if (Cont%Divisores == 0){ 
			    
				Dividiu = 1;
			
			}
		}
		
		if (Dividiu == 1){ //Não achou divisores
			cout << endl << Cont << " é primo!!" << endl;	
		}
		else{
			cout << endl << Cont << " não é primo!!" << endl;	
		}
		
		cout << endl;
		
	}
	
	
	return 0;
}



