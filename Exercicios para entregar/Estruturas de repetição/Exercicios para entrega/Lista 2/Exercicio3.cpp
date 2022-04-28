#include<iostream>

using namespace std;

double sal_bruto, num_dependentes, desconto_inss, sal_liquido;
int main()
{
	cout<<"Qual o salario bruto do funcionario?: ";
	cin>>sal_bruto;	
	
	cout<<"Qual o numero de dependentes que o funcionario possui?: ";
	cin>>num_dependentes;
	
	if(sal_bruto<=670)
	{
		desconto_inss = (sal_bruto*8)/100;
		sal_liquido = sal_bruto - desconto_inss + (15 * num_dependentes) + 40 + 100;
		cout<<"O salario liquido eh: "<<sal_liquido;
	}else{
		
			if(sal_bruto>=671 && sal_bruto<=1500)
			{
			   desconto_inss = (sal_bruto*9)/100;
			   sal_liquido = sal_bruto - desconto_inss + (15 * num_dependentes) + 40 + 100;
		       cout<<"O salario liquido eh: "<<sal_liquido;		
			}else{
				
					if(sal_bruto>=1500 && sal_bruto<=3500)
					{
					   desconto_inss = (sal_bruto*10)/100;
			           sal_liquido = sal_bruto - desconto_inss + (15 * num_dependentes) + 40 + 100;
		               cout<<"O salario liquido eh: "<<sal_liquido;	
					}else{
						
							if(sal_bruto>3500)
							{
							   desconto_inss = (sal_bruto*11)/100;
			                   sal_liquido = sal_bruto - desconto_inss + (15 * num_dependentes) + 40 + 100;
		                       cout<<"O salario liquido eh: "<<sal_liquido;	
							}
					     }
			     }
	     }
}
