#include<iostream>

using namespace std;

float sal, novo_sal, val_aumento;
int main()
{
	cout<<"Qual o valor do seu salario?: ";
	cin>>sal;
	
	val_aumento = (sal * 25)/100;
	novo_sal = sal + val_aumento;
	
	cout<<"O valor do seu novo salario eh: "<<novo_sal;	
}
