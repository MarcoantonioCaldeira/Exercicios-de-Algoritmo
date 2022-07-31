#include<iostream>

using namespace std;

int Multiplica_Vetor(int A[10], int val_X){
	int i, multi;
	
	cout<<endl<<"Vetor A";
	
	for(i=0; i<10; i++){
		cout<<endl<<"Digite um valor: ";
		cin>>A[i]; 
	}
	
	cout<<endl<<"Valor X";
	
	cout<<endl<<"Digite um valor: ";
	cin>>val_X;
	
	cout<<endl<<"Vetor M";
	
	for(i=0; i<10; i++){
		multi = A[i]*val_X;
		cout<<endl<<multi;
	}
	
	return multi;
	
}


int main(){
	int vet[10], val_X;
	
	Multiplica_Vetor(vet, val_X);
}
