#include<iostream>

using namespace std;

int num1, num2;
int main()
{
 	cout<<"Digite um numero: ";
	cin>>num1;	
	
	cout<<"Digite outro numero: ";
	cin>>num2;
	
	if(num1>num2){
	  cout<<"O maior numero eh "<<num1;
	}
	else{
	  cout<<"O maior numero eh "<<num2;	
	}
}
