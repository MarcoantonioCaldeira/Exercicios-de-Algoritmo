#include<iostream>

using namespace std;

int n_vendedor, t_vendas;
double sal_fixo, valor_comicao,sal_total;
int main()
{
	cout<<"Qual o numero do vededor?: ";
	cin>>n_vendedor;
	
	cout<<"Qual o valor do salario fixo?: ";
	cin>>sal_fixo;
	
	cout<<"Qual foi o valor do total de vendas efetuadas por ele?: ";
	cin>>t_vendas;
	
	if(t_vendas<=1000)
	{
		valor_comicao = (t_vendas * 3)/100;
		cout<<"O valor da comicao eh: "<<"R$"<<valor_comicao<<",00"<<"\n";
		sal_total = valor_comicao + sal_fixo;
		cout<<"O salario do total do vendedor numero "<<n_vendedor<<" eh igual ah: "<<sal_total;
	}else{
			if(t_vendas>=1000 || t_vendas<=2000)
			{
			   valor_comicao = (t_vendas * 5)/100;
			   cout<<"O valor da comicao eh: "<<"R$"<<valor_comicao<<",00"<<"\n";
		       sal_total = valor_comicao + sal_fixo;
		       cout<<"O salario do total do vendedor numero "<<n_vendedor<<" eh igual ah: "<<sal_total;		
			}else{
				
					if(t_vendas>=5000)
					{
					   valor_comicao = (t_vendas * 10)/100;
			           cout<<"O valor da comicao eh: "<<"R$"<<valor_comicao<<",00"<<"\n";
		               sal_total = valor_comicao + sal_fixo;
		               cout<<"O salario do total do vendedor numero "<<n_vendedor<<" eh igual ah: "<<sal_total;	
					}
			     }
		
	     }
}
