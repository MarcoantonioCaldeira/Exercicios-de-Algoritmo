#include<iostream>
#include <cstdlib>

using namespace std;

void Ler_dados(int mat[10][10]){
	 int i, j, cont;
	
	cout<<endl<<"Os dados sao: ";
	
	for ( i=0; i<10; i++ ){//linhas
	
		for ( j=0; j<10; j++ ){//colunas
			
			mat[ i ][ j ] = cont;
			cout<<endl<<"Elemento=n"<<i<<j<<"= "<<cont;
			cont++;
		}
    }
}

int Media_diagonal(int mat[10][10]){
	int soma, i, j, cont;
	float media;
	
	for ( i=0; i<10; i++ ){//linhas
	
		for ( j=0; j<10; j++ ){//colunas
            
            mat[ i ][ j ] = 10 + rand() % 10;
		    if( i==j ){
                soma += mat[i][j];
                media = (soma)/10; 
            }
		}
    }
    cout<<endl<<"A media da diagonal principal eh: "<<media;
    
    return media;
}



int main(){	
	int matriz[10][10];
	
	Ler_dados(matriz);
	Media_diagonal(matriz);

}
