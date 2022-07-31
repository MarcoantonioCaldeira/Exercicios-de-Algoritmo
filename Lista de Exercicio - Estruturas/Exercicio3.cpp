#include<iostream>

using namespace std;

struct produto{
  int codigo;
  string descricao;
  int quantidade_em_estoque;
  int quantidade_minima;
  int preco;
};

void Ler_Produto(produto v[50]){
    int Cont;
	
	for(Cont=0; Cont<49; Cont++){

	    cout << endl << "Produto " << Cont + 1 << ":";	
	    cout<<endl<<"Digite o codigo: ";
	    cin>>v[Cont].codigo;		

		cout<<"Faca a descricao do produto: ";
		cin>>v[Cont].descricao;	

		cout<<"Digite o preco: ";
		cin>>v[Cont].preco;		
		
		cout<<"Digite a quantidade minima: ";
		cin>>v[Cont].quantidade_minima;
		
		cout<<"Digite a quantidade em estoque: ";
		cin>>v[Cont].quantidade_em_estoque;

	} 	 	
	
} 


void Mostrar_produtos(produto v[50]){
	int Cont;
	
	cout<<endl<<"Os PRODUTOS ABAIXO DO ESTOQUE SAO: ";
	for(Cont=0; Cont<49; Cont++){
				
		if(v[Cont].quantidade_em_estoque<v[Cont].quantidade_minima){
			
			cout << endl << "Produto " << Cont + 1 << ":";			
		    cout<<endl<<"Descricao: "<<v[Cont].descricao;		
		    cout<<endl<<"Quantidade em estoque: "<<v[Cont].quantidade_em_estoque;	
		    cout<<endl<<"Quantidade minima: "<<v[Cont].quantidade_minima;	
	    }

	} 
}

int main(){
	produto v[50];
	
	Ler_Produto(v);
	Mostrar_produtos(v);
}
