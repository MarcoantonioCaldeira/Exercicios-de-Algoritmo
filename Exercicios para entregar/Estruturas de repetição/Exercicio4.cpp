#include<iostream>

using namespace std;

int num;
int main()
{
	cout<<"Digite um numero: ";
	cin>>num;
	
	if(num<0){
		
	   cout<<"O numero negativo";	
	   
	}
	else if(num==0)
	{
		
		cout<<"O numero igual a zero";
		
	}
	else if(num>0)
	{
		
		cout<<"O numero positivo";
		
	}

}
