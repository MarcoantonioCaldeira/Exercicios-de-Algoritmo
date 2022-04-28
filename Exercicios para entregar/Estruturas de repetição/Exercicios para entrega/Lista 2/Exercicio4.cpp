#include<iostream>

using namespace std;

double nota_quant;
int main()
{
	cout<<"Qual o valor da nota do aluno:?";
	cin>>nota_quant;
	
	if(nota_quant>=0 && nota_quant<2)
	{
		cout<<"Sem rendimento";
	}else{
			if(nota_quant>=2 && nota_quant<4)
			{
				
			   cout<<"Mau";
			   
			}else{
				    if(nota_quant>=4 && nota_quant<6)
				    {
				    	
				       cout<<"Regular";
				       
					}else{
							if(nota_quant>=6 && nota_quant<8.5)
							{
								
								cout<<"Bom";
								
							}else{
								  	if(nota_quant>=8.5 && nota_quant<=10)
								  	{
								  		
								  		cout<<"Exelente";
								  		
									}
							     }
					     }
				 
			     }
	     }
}
