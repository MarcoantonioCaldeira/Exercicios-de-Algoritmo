#include<iostream>

using namespace std;

int main()
{
	double Sal, n_horaT, v_horaT ;
	

	cout << "Voce trabalhou quantas horas por dia?";
	cin >> n_horaT;
	
	cout << "Qual o valor da hora trabalhada?";
	cin >> v_horaT;
	
    Sal = (n_horaT * v_horaT)*4;	
 	
	
	cout << "O valor do salario eh"<<Sal;

}
