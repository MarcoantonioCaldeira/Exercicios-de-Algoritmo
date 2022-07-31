#include<iostream>

using namespace std;

int Multiplica_Vetor(int vet1[6], int vet2[6])
{
	int i, multi;
	cout<<endl<<"Vetor 1";
	
	for(i=0; i<6; i++){
		cout<<endl<<"Digite um valor: ";
		cin>>vet1[i]; 
	}
	
	cout<<endl<<"Vetor 2";
	
	for(i=0; i<6; i++){
		cout<<endl<<"Digite um valor: ";
		cin>>vet2[i]; 
	}
	
	cout<<endl<<"A multiplicacao dos vetores eh: ";
	
	for(i=0; i<6; i++){
	     multi = vet1[i] * vet2[i];
	     cout<<endl<<multi;
	}
	
	return multi;
	
}



main(){
	int vet_1[6], vet_2[6];
	
	Multiplica_Vetor(vet_1, vet_2);
}
