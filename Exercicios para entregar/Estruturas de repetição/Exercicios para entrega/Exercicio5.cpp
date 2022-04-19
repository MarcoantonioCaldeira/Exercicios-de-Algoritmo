#include<iostream>

using namespace std;

int num, resto;
int main()
{
  cout<<"Digite um numero: ";
  cin>>num;
  
  resto = num % 2;
  
  if(resto == 0)
  {
     cout<<"O numero eh par";	
     
  }else{
  	
  	 cout<<"O numero eh impar";
  }
}

