#include<iostream>

using namespace std;

int Cont, num, R;
int main()
{
	cout<<"Digite um numero: ";
	cin>>num;
	
	Cont=1;
	while(Cont<=10){
		R = num * Cont;
		cout<<num<<"x"<<Cont<<"="<<R<<"\n";
		Cont++;
	}
}
