#include<iostream>

using namespace std;

struct Candidato{

	int n_inscricao;
	string nome;
	float altura;
	float peso;
	string naturalidade;
	string estado;

};

void Ler_Dados(Candidato v[30]){

	int  Cont;

	for(Cont=0; Cont<29; Cont++){

		cout << endl << "Aluno " << Cont + 1 << ":";
	    cout<<endl<<"Digite o numero de inscricao: ";
	    cin>>v[Cont].n_inscricao;

		

		cout<<"Digite o nome: ";
		cin>>v[Cont].nome;		

		cout<<"Digite a altura: ";
		cin>>v[Cont].altura;		

		cout<<"Digite o peso: ";
		cin>>v[Cont].peso;		

		cout<<"Digite a naturalidade: ";
		cin>>v[Cont].naturalidade;			

		cout<<"Digite o estado: ";
		cin>>v[Cont].estado;		

	}

}

void Mostrar_Dados(Candidato v[30]){

	int  Cont;	

        for(Cont=0; Cont<29; Cont++){   	

		    if(v[Cont].altura>=1.85){

		       cout<<endl<<"N inscricao: "<<v[Cont].n_inscricao;	
			   cout<<endl<<"Nome: "<<v[Cont].nome;
			   cout<<endl<<"A altura eh: "<<v[Cont].altura;
			   cout<<endl<<"Peso: "<<v[Cont].peso;
			   cout<<endl<<"Naturalidade: "<<v[Cont].naturalidade;	
			   cout<<endl<<"Estado: "<<v[Cont].estado;   	

		    }		

	   }		

}

int main(){
	Candidato v[30];
	
	Ler_Dados(v);
	Mostrar_Dados(v);
	
}






