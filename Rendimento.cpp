#include<iostream>

using namespace std;

int main()
{
	double V_deposito, V_TJuros, Rend, RendFinal;
	
	cout<<"Qual o valor do deposito";
	cin>>V_deposito;
	
	cout<<"Qual o valor do juro?";
	cin>>V_TJuros;
	
	Rend = V_deposito*(V_TJuros /100); 
	
	RendFinal = Rend + V_deposito; 
	
	cout << "O Rendimento final eh igual ah"<<RendFinal;
}
