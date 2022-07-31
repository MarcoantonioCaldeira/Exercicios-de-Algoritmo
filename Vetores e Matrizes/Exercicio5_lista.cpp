#include<iostream>

using namespace std;

void Ler_valores(int vet[10]){
	int i;
	
	for(i=0; i<10; i++){
		cout<<"Digite um valor: ";
		cin>>vet[i];
	}
}



void Maior_valor(int vet[10]){
	    int i, maior=0;
	    
	for(i=0; i<10; i++){
		if(vet[i]>maior){
			maior=vet[i];
		}	
	}
	
	cout<<"O maior valor eh: "<<maior;
}

void Menor_valor(int vet[10]){
	    int i, menor=0;
	    
	for(i=0; i<10; i++){
		if(vet[i]<menor){
			menor=vet[i];
		}	
	}
	
	cout<<endl<<"O menor valor eh: "<<menor;
}


main(){
	int vet[10];
	
	Ler_valores(vet);
	Maior_valor(vet);
	Menor_valor(vet);
}
