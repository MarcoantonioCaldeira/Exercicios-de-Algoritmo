#include<iostream>


using namespace std;

struct Dados_do_voo{
	int horario_de_partida;
	int quantidade_de_passageiros;
	int valor;
	string origem;
	string destino; 
};

void Cadastrar_Voo(Dados_do_voo v[10]){
	int Cont, num_voo=0;
	
	for(Cont=0; Cont<10; Cont++){
		cout<<"Voo numero "<<Cont++;
		cout<<endl<<"Qual o horario de partida: ";
		cin>>v[Cont].horario_de_partida;		
		cout<<endl<<"Qual a quantidade de passageiros: ";
		cin>>v[Cont].quantidade_de_passageiros;		
		cout<<endl<<"Qual o valor: ";
		cin>>v[Cont].valor;		
		cout<<endl<<"Digite a origem: ";
		cin>>v[Cont].origem;	
		cout<<endl<<"Digite o destino: ";
		cin>>v[Cont].destino;
	}	
}


void Voos_da_Manha(Dados_do_voo v[10]){
	int Cont, num_voo=0;
	
	for(Cont=0; Cont<10; Cont++){
		
		if(v[Cont].horario_de_partida<=11){
			cout<<endl<<"OS VOOS DA MANHÃO SAO: ";		
			cout<<endl<<"VOO"<<num_voo++;
			cout<<endl<<"Horario de partida: "<<v[Cont].horario_de_partida;
			cout<<endl<<"Quantidade de passageiros: "<<v[Cont].quantidade_de_passageiros;
			cout<<endl<<"Valor da passagem: "<<v[Cont].valor;
			cout<<endl<<"Destino: "<<v[Cont].destino;
		}
	}	
}


void Mostrar_Dados(Dados_do_voo v[10]){
	int Cont, num_voo=0;
	string origem_da_pessoa;
	
	cout<<endl<<"Qual a origem do passageiro?: ";
	cin>>origem_da_pessoa;
	
	for(Cont=0; Cont<10; Cont++){
	
		if(origem_da_pessoa == v[Cont].origem){
			cout<<" OS VOOS QUE POSSUEM ESSA ORIGEM SAO: ";
			
			cout<<endl<<"VOO"<<num_voo++;
			cout<<endl<<"Horario de partida: "<<v[Cont].horario_de_partida;
			cout<<endl<<"Quantidade de passageiros: "<<v[Cont].quantidade_de_passageiros;
			cout<<endl<<"Valor da passagem: "<<v[Cont].valor;
			cout<<endl<<"Destino: "<<v[Cont].destino;
		}
    }
}


main(){
	setlocale (LC_ALL,"Portuguese");
	
	Dados_do_voo v[10];	
	Cadastrar_Voo(v);
	Voos_da_Manha(v);
	Mostrar_Dados(v);
	
}
