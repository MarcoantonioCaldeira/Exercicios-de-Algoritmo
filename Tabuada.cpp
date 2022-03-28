#include<iostream>

using namespace std;

int main()
{
	int num, R;
	
	cout<< "Escreva um numero: ";
	cin >> num;
	
	for(R = 1 ; R<=10 ; R++)
    	cout<< num << "*"<< R <<"="<< num * R;
	return 0;
}
