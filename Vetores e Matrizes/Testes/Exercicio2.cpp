#include<iostream>

using namespace std;

main()
{
	int vet[8], i;
	for(i=1; i<9; i++){
		cout<<"Digite a sua idade: ";
		cin>>vet[i];
	}
	
	cout<<"As idades maiores de 18 digitadas foram: ";
	
	for(i=1; i<9; i++){
		
		if(vet[i]>=18){
		   cout<<endl<<vet[i];	
		}
	}
	
}
