#include<iostream>

using namespace std;

int quant_total, Cont, idade, valor_salario_feminino=0, maior=0, menor=0, quant_mulheres_salario=0, salario_m, 
valor_salario_f=0, valor_salario_masculino=0, soma_salario;
float media_salario;
char sexo;
int main(){
	cout<<"Digite a quantidade total do grupo: ";
	cin>>quant_total;
	
	for(Cont=1; Cont<=quant_total; Cont++){
		
		//cout<<endl<<"Digite sua idade: ";
		//cin>>idade;
		
		//if(Cont==1){
			//maior=idade;
			//menor=idade;
		//}else{
			//if(idade>maior){
			//	maior=idade;
			//}else{
				//if(idade<menor){
					//menor=idade;
				//}
			//}
		//}
		
		cout<<endl<<"Qual o seu sexo?[M/F]: ";
		cin>>sexo;
		
		if(sexo='F'){
			
			cout<<endl<<"Qual o valor do seu salario?: ";
		    cin>>valor_salario_feminino;
		    
		    if(valor_salario_feminino>=100){
		    	quant_mulheres_salario++;
			}
			
		    valor_salario_f++;
		    
		}else{
			if(sexo='M'){
				
				cout<<endl<<"Qual o valor do seu salario?: ";
				cin>>salario_m;
				
				valor_salario_masculino++;
			}
			
		}
		
	}
	
	media_salario = media_salario + (valor_salario_f + valor_salario_masculino)/quant_total;
	//cout<<endl<<"A maior idade do grupo eh igual ah: "<<maior;
	//cout<<endl<<"A menor idade do grupo eh igual ah: "<<menor;
	cout<<endl<<"A quantidade de mulheres com salario maior ou igual ah R$100,00 eh: "<<quant_mulheres_salario;
	cout<<endl<<"A media de salario do grupo eh igual ah: "<<media_salario;
	
}
