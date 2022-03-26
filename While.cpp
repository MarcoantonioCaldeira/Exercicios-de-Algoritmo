#include <iostream>
using namespace std;

int main() {
 int escolha;
 double valor;
 
 cout<< "Digite a opcao desejada";
 cout<< "1.Para doar R$25,00 aperte 1\n";
 cout<< "2.Para doar R$50,00 aperte 2\n";
 cout<< "3.Para doar R$100,00 aperte 3\n";
 cout<< "4.Para doar outro valor digite 4\n";
 escolha = 0;
 cin >> escolha;
 
 switch(escolha)
 {
 	case 1:
	   cout<<"Parabens voce doou R$25,00";  
	break;
	
	case 2:
    	cout<<"Parabens voce doou R$50,00";  
	break;
	
	case 3:
    	cout<<"Parabens voce doou R$100,00";  
	break;
	
	case 4:
     	cout<<"Digite o valor que voce quer doar";
		cin >> valor; 
		cout<< "Parabens voce doou R$"<< valor<<",00"; 
	break;
 }
return 0;	
}

