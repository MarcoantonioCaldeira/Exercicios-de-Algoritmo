#include<iostream>

using namespace std;


main(){
	int vet[10], i, soma_nota=0, cont;
	float media;
	
	for(i=0; i<10; i++){
		cout<<"Digite a sua nota: ";
		cin>>vet[i];
	}
	
	cont = 1;
	for(i=0; i<10; i++){
		cout<<endl<<cont<<"-"<<vet[i];
		cont++;	
	}
	
	for(i=0; i<10; i++){
		soma_nota = soma_nota + vet[i];	
	}
	
	media = soma_nota/10;
	
	cout<<endl<<"A media da sala eh: "<<media;
	
	
}
