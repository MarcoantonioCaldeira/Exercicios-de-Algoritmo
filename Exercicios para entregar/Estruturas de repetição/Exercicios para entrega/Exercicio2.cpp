#include<iostream>

using namespace std;

char letra;
int main()
{
	cout<<"Digite uma letra: ";
	cin>>letra;
	
	if(letra == 'a' || letra =='e' || letra =='i' || letra == 'o' || letra == 'u')
	{
		cout<<"O caractere eh igual ah: "<<letra;
	}
}
