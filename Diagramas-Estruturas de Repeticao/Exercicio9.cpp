#include<iostream>

using namespace std;

int Cont, sexo,soma_sexo_masc, num_pessoa;
float altura, media_altura_fem;
int main()
{
	Cont = 1;
	while(Cont<=5)
	{
		cout<<"Digite o seu sexo: ";
		cin>>sexo;
		
		num_pessoa = Cont;
		
		if(sexo==1){
			cout<<"Pessoa "<<num_pessoa<<" feminino"<<"\n";
			
			cout<<"\n"<<"Qual a sua altura?: ";
			cin>>altura;
			
		}else{
			if(sexo==0){
				cout<<"Masculino"<<"\n";
				
			}
		}
		Cont++;
	}
	soma_sexo_masc = sexo + soma_sexo_masc;
	cout<<"O total de homens eh igual ah: "<<soma_sexo_masc;
	media_altura_fem = altura + media_altura_fem/5; 
	cout<<"A media da altura das mulheres eh: "<<media_altura_fem;
}
