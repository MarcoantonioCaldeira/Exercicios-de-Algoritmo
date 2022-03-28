#include<iostream>

using namespace std;

int main()
{
	double sal, n_sal, v_almento ;
	
	cout << "Qual o valor do salario";
	cin >> sal;
	
	v_almento = sal * 25/100;
	n_sal = sal + v_almento;
	
	cout << "O valor do salario eh"<<n_sal;

}
