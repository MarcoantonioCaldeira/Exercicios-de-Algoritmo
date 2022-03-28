#include<iostream>

using namespace std;

int main()
{
	double p_quilo, p_grama;
	
	cout << "Qual o seu peso?";
	cin>>p_quilo;
	
	p_grama = p_quilo * 1000;
	
	cout << "O seu peso em Grama eh"<<p_grama<<"gramas";
}
