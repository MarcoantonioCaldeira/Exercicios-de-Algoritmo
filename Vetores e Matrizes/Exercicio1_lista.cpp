#include<iostream>

using namespace std;


void Quant_num(int vet[6]){
	int i, quant_pares=0, quant_impares=0;
	
	
	for(i=0; i<6; i++){
		cout<<"Digite um numero: ";
		cin>>vet[i];
	}
	
	cout<<"Os numeros pares digitados foram: ";
		
	for(i=0; i<6; i++){
					
		if(vet[i]%2 == 0){	
	    	cout<<endl<<vet[i];
	    	quant_pares++;
	    }
    } 
     
    cout<<endl<<"Os numeros impares digitados foram: ";
		
	for(i=0; i<6; i++){
					
		if(vet[i]%2 >= 1){	
	    	cout<<endl<<vet[i];
	    	quant_impares++;
	    }
    } 
    
    cout<<endl<<"A quantidade de numeros pares eh: "<<quant_pares;
    cout<<endl<<"A quantidade de numeros impares eh: "<<quant_impares;
    
    return vet[i];
}



int main(){
	int num[6];
	Quant_num(num);
}
