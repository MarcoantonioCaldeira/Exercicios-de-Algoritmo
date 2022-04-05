#include<iostream>

using namespace std;

double n1, n2, n3, media_p, peso_1, peso_2, peso_3, val_pesos;
int main()
{
	
	cout << "Qual o valor da nota 1";
	cin >> n1;
	cout << "Qual o valor do peso 1";
    cin >> peso_1;
	
	
	cout << "Qual o valor da nota 2";
    cin >> n2;
	cout << "Qual o valor do peso 2";
    cin >> peso_2;
	
	
	cout << "Qual o valor da nota 3";
	cin >> n3;
	cout << "Qual o valor do peso 3";
	cin >> peso_3;
	
	val_pesos = peso_1 + peso_2 + peso_3;	
	media_p = ((n1 * peso_1) + (n2 * peso_2) + (n3 * peso_3))/ val_pesos;
	
	cout<<"A media ponderada do aluno eh igual ah"<<media_p;
	

}
