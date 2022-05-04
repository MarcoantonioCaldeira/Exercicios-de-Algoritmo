#include<iostream>

using namespace std;

int sexo, idade;
int main()
{
	cout<<"Qual o sexo da pessoa?[Masculino igual ah 1 e Feminino igual ah 2]: ";
	cin>>sexo;
	
	cout<<"\n"<<"Qual a idade da pessoa?: ";
	cin>>idade;	
	
	if(sexo=1 && idade>=65)
	{
		cout<<"Pode se aposentar";
		
	}else{
		 	if(sexo=2 && idade>=60)
		 	{
		 		cout<<"Pode se aposentar";
			}else{
				    if(sexo=1 && idade<65)
				    {
				    	cout<<"\n"<<"Nao pode se aposentar";	
					}else{
							if(sexo=2 && idade<60) 
							{
								cout<<"\n"<<"Nao pode se aposentar";
							}
				                
					     }
			     }
	     }
	if(sexo!=1 || sexo!=2)
	{
		cout<<"Esse valor nao existe";
	}     
}
