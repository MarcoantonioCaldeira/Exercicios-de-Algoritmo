#include<iostream>

using namespace std;

void Ler_Matriz(int mat[30][30]){
	int i, j, cont;
	
	cout<<endl<<"Os dados sao: ";
	
	for ( i=0; i<30; i++){//linhas
	
		for ( j=0; j<30; j++){//colunas
			
			mat[ i ][ j ] = cont;
			cout<<endl<<"Elemento=n"<<i<<j<<"= "<<cont;
			cont++;
		}
    }
}

void Verifica_Matriz(int mat[30][30]){
	int i, j, cont, valor;
	
	cout<<endl<<"Digite o valor: ";
	cin>>valor;
	
	for ( i=0; i<30; i++){//linhas
	
		for ( j=0; j<30; j++){//colunas
			
			mat[ i ][ j ] = cont;
			cont++;
			
			if(cont==valor){
				
				cout<<endl<<"O elemento na linha "<<i<<" coluna "<< j <<" eh igual ah = "<<valor;
				
			}
		}
    }
}

int main(){
	int mat[30][30];
	
	Ler_Matriz(mat);
	Verifica_Matriz(mat);
}
