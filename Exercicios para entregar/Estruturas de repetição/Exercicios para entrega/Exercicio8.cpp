#include<iostream>
#include<math.h>

using namespace std;

int num1, num2, escolha, som, sub, mult, poten, med, res_divisao;
double div;
int main()
{
  cout<<"Digite um numero: ";
  cin>>num1;
  
  cout<<"Digite o segundo numero: ";
  cin>>num2;
  
  cout<<"Escolha uma das opcoes:\n";
  cout<<"1.Adicao\n";
  cout<<"2.Subtracao\n";
  cout<<"3.Multiplicacao\n";
  cout<<"4.Cociente da divisao\n";
  cout<<"5.Resto da divisao\n";
  cout<<"6.Potenciacao\n";
  cout<<"7.Media\n";
  escolha = 0;
  cin>>escolha;
  
  switch(escolha)
   {
   	 case 1: 
		som = num1 + num2;
		cout<<"A soma eh igual ah"<<som;
	 break;
	 
	 case 2: 
		sub = num2 - num1;
		cout<<"A subtricao de "<<num2<< " por "<<num1<<" eh igual ah "<<sub;
	 break;	
	 
	 case 3: 
		mult = num1 * num2;
		cout<<"A multiplicacao de "<<num1<< " por "<<num2<<" eh igual ah "<<mult;
	 break;
	 
	 case 4: 
		div = num1 / num2;
		cout<<"A divisao de "<<num1<< " por "<<num2<<" eh igual ah "<<div;
	 break;	
	 
	 case 5: 
		res_divisao = num1 % num2;
		cout<<"O resto da divisao de "<<num1<< " por "<<num2<<" eh igual ah "<<res_divisao;
	 break;	
	 
	 case 6: 
		cout<<"A potenciacao de "<<num1<< " elevado ah "<<num2<<" eh igual ah "<<pow(num1,num2);
	 break;
	 
	 case 7: 
		med = num1 * num2 /2;
		cout<<"A media de "<<num1<< " e "<<num2<<" eh igual ah "<<med;
	 break;
   }
   
   if(escolha == 0 || escolha > 7) {
   	  cout<<"Essa opcao nao existe";
   }
}
