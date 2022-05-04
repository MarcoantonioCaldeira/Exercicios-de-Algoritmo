#include<iostream>

using namespace std;

double cap_total, carga_total,p1,p2,p3,p4,p5;
int main()
{
	cout<<"Qual o peso da primeira pessoa?: ";
	cin>>p1;
	
	cout<<"Qual o peso da segunda pessoa?: ";
	cin>>p2;
	
	cout<<"Qual o peso da terceira pessoa?: ";
	cin>>p3;
	
	cout<<"Qual o peso da quarta pessoa?: ";
	cin>>p4;
	
	cout<<"Qual o peso da quinta pessoa?: ";
	cin>>p5;
	
	carga_total = p1 + p2 + p3 + p4 + p5;
	
	cout<<"Qual a capacidade total do elevador?: ";
	cin>>cap_total;
	
	if(carga_total<=cap_total)
	{
		cout<<"O elevador esta liberado para subir";
	}else{
			cout<<"O elevador nao esta liberado para subir";
		 }
}
