#include<iostream>

using namespace std;

main(){
	int vet[10], i, dobro;
	
	for(i=1; i<10; i++){
		
		cout<<"Digite um numero: ";
		cin>>vet[i];
		
	}
	
	cout<<endl<<"O dobro dos numeros eh igual ah: ";
	
	for(i=1; i<10; i++){
		dobro = vet[i] + vet[i];
	    cout<<endl<<dobro;
	}
		
}
