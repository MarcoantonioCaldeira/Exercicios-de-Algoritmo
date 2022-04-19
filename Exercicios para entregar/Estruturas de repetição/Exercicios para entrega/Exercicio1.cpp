#include<iostream>

using namespace std;

float med, n1, n2;
int main()
{
	cout<<"Digite a primeira nota: ";
	cin>>n1;
	
	cout<<"Digite a segunda nota: ";
	cin>>n2;
	
	med = n1 + n2/2;
	
	if(med>=7)
	{
	   cout<<"O aluno obteve media: "<<med<<" e esta aprovado.";	
	}
	else
	{
		cout<<"O aluno obteve media "<<med<< " e foi reprovado";
	}
}
