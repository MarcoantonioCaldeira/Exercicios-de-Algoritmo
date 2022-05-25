#include<iostream>

using namespace std;

int Cont, nota1, nota2, num_aluno, media, reprovado=0, em_exame=0, aprovado=0, media_classe, soma_classe;//Declarando variaveis
int main(){
	
	Cont=1;
	while(Cont<=6){//Contara os seis alunos
		
		
		num_aluno = Cont;//Ira mostrar o numero do aluno
		cout<<endl<<"Digite a nota do aluno "<<num_aluno<<": ";
		cin>>nota1;
		cout<<"Digite a nota do aluno "<<num_aluno<<": ";
		cin>>nota2;
		
		media = (nota1 + nota2)/2;//media do aluno
		cout<<endl<<"A media do aluno "<<num_aluno<<" eh: "<<media;
		
		if(media<=3){
			cout<<endl<<"Aluno reprovado";
			reprovado++;
		}else{
			if(media>=4 && media<=7){
				cout<<endl<<"Aluno em exame";
				em_exame++;
			}else{
				if(media>=7){
					cout<<endl<<"Aluno aprovado";
					aprovado++;
				}
			}
		}
		cout<<endl<<"Obrigado as notas do aluno ficaram armazenadas!!!";
		Cont++;
		soma_classe = media + soma_classe;
		media_classe = soma_classe/6;//A media da sala sera a variavel com as duas notas de cada aluno da sala/12
	}
	
	cout<<endl<<"O total de alunos reprovados eh igual ah: "<<reprovado;
	cout<<endl<<"O total de alunos em exame eh igual ah: "<<em_exame;
	cout<<endl<<"O total de alunos aprovados eh igual ah: "<<aprovado;
	cout<<endl<<"A media total da classe eh igual ah: "<<media_classe;
}
