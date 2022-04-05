#include<iostream>

using namespace std;

float val_c, val_f;
int main()
{
	cout<<"Qual o valor da temperatura em celsius?:";
	cin>>val_c;
	
	val_f = 1.8 * val_c + 32;	
	
	cout<<"O valor da temperatura em Fahrenheit eh: "<<val_f<<" graus fahrenheit.";
}
