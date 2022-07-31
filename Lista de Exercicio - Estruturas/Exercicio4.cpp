#include<iostream>

using namespace std;

struct filme{
	int codigo;
	string titulo;
	string genero;
	string categoria;
	int valor_locacao;
};


int Ler_filme(filme v[2]){
	int Cont=0, R; 
	 
	cout<<endl<<"CADASTRO DE FILMES";
	 
	do{
		cout<<endl<<"Criar codigo para o filme: ";
		cin>>v[Cont].codigo;		
	    cout<<endl<<"Qual o titulo?: ";
	    cin>>v[Cont].titulo;	    
	    cout<<endl<<"Qual o genero?: ";
	    cin>>v[Cont].genero;	    
	    cout<<endl<<"Qual a categoria?: ";
	    cin>>v[Cont].categoria;	    	    		
		
		cout<<"Deseja cadastrar outro cliente?: [S = 1/N = 2]";
		cin>>R;
		
		Cont++;
		if(Cont == 2){
			cout << "Total maximo de clientes atingidos[500]!!!";
		}
	}while(R== 1 && Cont < 2);
	
	return Cont;	
}

void Imprimir_Dados(filme v[2], int TotClientes){	
	 int Cont; 
	 	 
	 for(Cont=0; Cont<TotClientes; Cont++)
	 {
		 cout << endl << "Cliente " << Cont + 1 << ":";	 	
		 cout<<endl<<"Codigo: "<<v[Cont].codigo;
	 	 cout<<endl<<"Titulo: "<<v[Cont].titulo;
	 	 cout<<endl<<"Genero: "<<v[Cont].genero;
	 	 cout<<endl<<"Categoria: "<<v[Cont].categoria;
	 }
}

int Calcular_Locacao(filme valor){
	int quant_filmes, Cont;
	
	cout<<endl<<"Quantos filmes o cliente alugou?: ";
    cin>>quant_filmes;
    
    cout<<endl<<"Digite o valor da locacao: ";
	cin>>filme.valor_locacao;	
	
	valor = quant_filmes * filme.valor_locacao;	
	cout<<"O valor a pagar eh: "<<valor;
	
	}
		
	return valor;
}

main(){
	filme v[2];
	int TotClientes;
	
	setlocale (LC_ALL,"Portuguese");
	
	Ler_filme(v);
	Imprimir_Dados(v, TotClientes);
	Calcular_Locacao(v);	
}
