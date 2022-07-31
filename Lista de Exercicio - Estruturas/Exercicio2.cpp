#include<iostream>

using namespace std;

struct comeia{
	int codigo;
	string regiao;
	string estado;
	int num_abelhas;	
	string qualificacao;
	
};



void Ler_Dados(comeia c[200]){

    int Cont;	 

    for(Cont=0; Cont<199; Cont++){

	    cout << endl << "Comeia " << Cont + 1 << ":";	
	    cout<<endl<<"Digite o codigo de inscricao: ";
	    cin>>c[Cont].codigo;		

		cout<<"Digite a regiao: ";
		cin>>c[Cont].regiao;	

		cout<<"Digite o estado: ";
		cin>>c[Cont].estado;		

		cout<<"Digite o numero de abelhas: ";
		cin>>c[Cont].num_abelhas;	
		
		cout<<"Digite a qualificaocao(Bom, Medio ou Fraco): ";
		cin>>c[Cont].qualificacao;	

	} 	

}

void imprimir_qualificacao(comeia c[200]){

	int Cont;
		
	cout<<endl<<"OS DADOS SAO: ";
	
	for(Cont=0; Cont<199; Cont++){

        cout << endl << "Comeia " << Cont + 1 << ":";
		cout<<endl<<"Codigo de inscricao: "<<c[Cont].codigo;	
		cout<<endl<<"Regiao: "<<c[Cont].regiao;
		cout<<endl<<"Estado: "<<c[Cont].estado;
		cout<<endl<<"Numero de abelhas: "<<c[Cont].num_abelhas;	

    }

}



int main(){

	comeia c[200];	

	Ler_Dados(c);
	imprimir_qualificacao(c);

}
