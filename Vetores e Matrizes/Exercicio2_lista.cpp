#include<iostream>

using namespace std;

void Retorna_trinta(int vet[7]){
	int i, cont;
	
	for(i=0; i<8; i++){
		
		cout<<"Digite um numero: ";
		cin>>vet[i];
	}
	
    cout<<"Os numeros digitados foram: ";
    
    for(i=0; i<8; i++){
    	
    	if(vet[i]==30){
    		cout<<endl<<"Possui numeros iguais ah trinta";
    		cout<<endl<<"Posicao:"<<i << " valor "<<vet[i];	
		}
	}

}

main(){
	int vet[7];

	Retorna_trinta(vet);
}
