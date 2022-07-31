#include<iostream>


using namespace std;

void Mostra_dados(int matriz[3][3]){
	int i, j;
	
	cout<<endl<<"Digite valor para os elementos da matriz"<<endl;
	
	for ( i=0; i<3; i++ ){//linhas
    
		for ( j=0; j<3; j++ ){//colunas
			
			printf ("\nElemento[%d][%d] = ", i, j);
			scanf ("%d", &matriz[ i ][ j ]);
		}
	}
	
	cout<<"\n\n******************* Saida de Dados ********************* \n\n";
	
	for ( i=0; i<3; i++ ){//linhas
	
		for ( j=0; j<3; j++ ){//colunas
			
			printf ("\nElemento[%d][%d] = %d\n", i, j,matriz[ i ][ j ]);
		}
    }
}



int main(){	
	int matriz[3][3];
	
	Mostra_dados(matriz);

}
