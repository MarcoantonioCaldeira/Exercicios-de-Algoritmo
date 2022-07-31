#include<iostream>

using namespace std;

void Ler_Matriz(int mat[6][6]){
	int i, j, cont;
	
	cout<<endl<<"Os dados sao: ";
	
	for ( i=0; i<6; i++){//linhas
	
		for ( j=0; j<6; j++){//colunas
			
			mat[ i ][ j ] = cont;
			cout<<endl<<"Elemento=n"<<i<<j<<"= "<<cont;
			cont++;
		}
    }
}

int Multiplica_Matriz(int mat[6][6]){
	int i, j, cont, valor, multi, vet[36];
	
	cout<<endl<<"Digite um valor: ";
	cin>>valor;
	
	for ( i=0; i<6; i++){//linhas
	
		for ( j=0; j<6; j++){//colunas
			mat[ i ][ j ] = cont;
			multi = cont * valor;
			cont++;
			cout<<endl<<cont<<"*"<<valor<<"= "<<multi;
		}
    }
     
    cout<<endl<<"Vetor de 36";
     
    for (i=0; i<35; i++){
    	vet[i] = cont;
    	cout<<endl<<cont;
    	multi = cont * valor;
    	cont++;
    	cout<<endl<<"posicao "<<i<<cont<<"*"<<valor<<"= "<<multi;
	}
	
}


int main(){
	int mat[6][6];
	
	Ler_Matriz(mat);
	Multiplica_Matriz(mat);
}
