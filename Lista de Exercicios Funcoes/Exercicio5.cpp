#include<iostream>

using namespace std;

float media_aluno(int n1, int n2){
	    float media_nota=0;
		
		media_nota = (n1 + n2)/2;	
		
		if(media_nota>=0.4 && media_nota<=4.9){
			cout<<"D";
		}else{
			if(media_nota>=5.0 && media_nota<=6.9){
				cout<<"C";
			}else{
				if(media_nota>=7.0 && media_nota<=8.9){
					cout<<"B";
				}else{
				   if(media_nota>=9.0 && media_nota<=10){
				        cout<<"A";
				   }		
				}
			}
		}
		
	return media_nota;
}

main(){
	int nota1, nota2;
	
	cout<<"Digite a primeira nota do aluno: ";
	cin>>nota1;
	
	cout<<"Digite a segunda nota do aluno: ";
	cin>>nota2;
	
	media_aluno(nota1, nota2);
	cout<<media_aluno;
}
