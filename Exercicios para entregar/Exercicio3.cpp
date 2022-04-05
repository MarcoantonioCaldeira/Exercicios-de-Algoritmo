#include <iostream>

using namespace std;

int ano_nasci, ano_atual, idade;
int main(){
		
	cout<<"Qual o seu ano de nascimento?";
	cin >> ano_nasci;

    cout<<"Qual o ano atual?";
	cin>>ano_atual;

	idade = ano_atual - ano_nasci;
	
	cout<<"Voce tem:"<<idade<<"anos";
}
