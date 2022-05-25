#include<iostream>

using namespace std;

int Cont, resultado;
float num;
int main(){

	cout<<endl<<"Digite um numero real: ";
	cin>>num;

		Cont=1;
		while(Cont<=200){
			
			resultado = num * Cont;
			cout<<endl<<num<<"x"<<Cont<<"="<<resultado; 
				  
		    Cont++;
		}
}
