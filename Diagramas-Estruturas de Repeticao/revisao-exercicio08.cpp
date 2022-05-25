#include<iostream>

using namespace std;

int Cont, num, cont_sexo=0, cont_altura, total_altura;
float altura,  percentual, feminino=0, masculino=0, media_populacao, maior, menor;
char sexo;
int main(){
	
	Cont=1;
	while(Cont<=5){
		cout<<endl<<"Digite sua altura: ";
		cin>>altura;
		
		if(Cont==1){
		    maior=altura;
			menor=altura;
		}else{			
		    if(altura>maior){
			     maior=altura;
		    }else{
			    if(altura<menor){
				     menor=altura;
			    }
		    }
        }
        
		cont_altura++;	
		
		cout<<"Digite o seu sexo[M/F]: ";
		cin>>sexo;
		
		
	
			if(sexo == 'F'){
				cout<<"Feminino";
				feminino++;
			}else{
				if(sexo == 'M'){
					cout<<"Masculino";
					masculino++;
				}
			}
	    
	    
		Cont++;
	}
	total_altura = cont_altura + total_altura;
	media_populacao = total_altura/5;
	percentual = (masculino*5)/100;
	
	cout<<endl<<"A media total eh igual ah: "<<media_populacao;
	cout<<endl<<"O percentual de homens eh igual ah: "<<percentual<<"%";
	cout<<endl<<"A maior altura eh igual ah: "<<maior;
	cout<<endl<<"A menor altura eh igual ah: "<<menor;
}
