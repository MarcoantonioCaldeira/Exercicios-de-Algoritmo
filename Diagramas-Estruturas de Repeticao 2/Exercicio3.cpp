//receber valores
//os valores tem que ser inteiros e positivos


#include<iostream>
using namespace std; 

int valor, Cont, num_Cont, maior, menor;
int main(){
	
	//Vou digitar a quantidade de valores
	cout<<"Digite a quantidade de valores: ";
	cin>>num_Cont;
	
	for(Cont=1; Cont<=num_Cont; Cont++){
		//Vou digitar valor por valor
		cout<<endl<<"Digite o "<<Cont<<" numero: ";
	    cin>>valor;
	 
	if(valor<=0){//Ira varificar os numeros se são zero ou negativos
		cout<<endl<<"Esses valores (zero e negativos) nao entrarao nos calculos";
	}
	    
    if(Cont==1){
	maior=valor;//O primeiro valor sera maior e menor
	menor=valor;//Ja o segundo sera maior ou menor
	}else{
		if(valor>maior){//Se o valor for maior que os outros, ele sera o maior
		maior = valor;
		}else{
		    if(valor<menor){//Se o valor for menor que os outros, ele sera o menor
		    	menor = valor;
	        }
	    }	
    }

}
	cout<<endl<<"O maior valor eh: "<<maior;//Ira mostrar o maior valor	
	cout<<endl<<"O menor valor eh: "<<menor;//Ira mostrar o menor valor1
}
	
	

