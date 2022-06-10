#include<iostream>

using namespace std;

string nadador(int idade){
	string categoria_idade;
	
	if(idade>=5 && idade<=7){
		categoria_idade = "Infantil A";
	}else{
		if(idade>=8 && idade<=10){
			categoria_idade = "Infantil B";
		}else{
			if(idade>=11 && idade<=13){
				categoria_idade = "Juvenil A";
			}else{
				if(idade>=14 && idade<=17){
					categoria_idade = "Juvenil B";
				}else{
					if(idade>18){
						categoria_idade = "Adulto";	
					}
				}
			}
		}
	}
	
	return categoria_idade;
}

int idade;
string categoria_idade;

main(){
	
	cout<<"Digite a sua idade: ";
	cin>>idade;
	
    categoria_idade = nadador(idade);
	cout<<categoria_idade;
	
	return 0;	
}
