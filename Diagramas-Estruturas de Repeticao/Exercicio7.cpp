#include <stdio.h>
#include <iostream>

using namespace std;

int Cont, Divisores, Dividiu;
int main () {
	setlocale (LC_ALL,"Portuguese");
	
	//0 e 1 n�o s�o primos por defini��o
	cout << "0 n�o � primo!!" << endl;
	cout << "1 n�o � primo!!" << endl;
	cout << "2 � primo!!" << endl;
	for (Cont=3;Cont <= 200; Cont = Cont = Cont+1){		
		Dividiu = 0;
		for (Divisores = 3; (Divisores <= Cont -1 && Dividiu ==0); Divisores = Divisores + 1){
			if (Cont%Divisores == 0){ 
			    
				Dividiu = 1;
			
			}
		}
		
		if (Dividiu == 1){ //N�o achou divisores
			cout << endl << Cont << " � primo!!" << endl;	
		}
		else{
			cout << endl << Cont << " n�o � primo!!" << endl;	
		}
		
		cout << endl;
		
	}
	
	
	return 0;
}



