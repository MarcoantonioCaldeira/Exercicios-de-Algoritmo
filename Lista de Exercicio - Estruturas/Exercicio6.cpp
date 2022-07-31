#include<iostream>

using namespace std;

struct Dados_Cidade{
	string nome;
	string estado;
	float populacao;
};

void Cadastrar_Cidade(Dados_Cidade v[2]){
	 int Cont; 
	 
	 for(Cont=0; Cont<2; Cont++){
	 	cout<<"Digite o nome da cidade: ";
	 	cin>>v[Cont].nome;
	 	cout<<"Digite o estado: ";
	 	cin>>v[Cont].estado;
	 	cout<<"Qual a populacao: ";
	 	cin>>v[Cont].populacao;
	 }
}


void Cidades_do_Parana(Dados_Cidade v[2]){
	int Cont;
	
	cout<<endl<<"As Cidades do Estado do Parana sao: ";
	
	for(Cont=0; Cont<2; Cont++){
		
		if(v[Cont].estado == "pr" || v[Cont].estado == "Parana"){
			
			cout<<v[Cont].nome;
		}
	}
}

void Maior_Cidade(Dados_Cidade v[2]){
	int Cont, maior=0;
	
	for(Cont=0; Cont<2; Cont++){
		
		if(Cont == 0){
			v[Cont].populacao = maior;
		}	
		if(v[Cont].populacao > maior){
			maior = v[Cont].populacao;
			cout<<endl<<"A maior cidade eh "<<v[Cont].nome<<"Com "<<maior<<" habitantes";
			}
		}
	}

main(){
	Dados_Cidade v[2];
	
	Cadastrar_Cidade(v);
	Cidades_do_Parana(v);
	Maior_Cidade(v);
}
