#include<iostream>

using namespace std;


int n1, n2, media, Cont, num_aluno, soma_classe, soma_nota, media_total;
int main(){
	setlocale(LC_ALL,"Portuguese");
	
	cout<<"*****Media dos alunos da sala*****";
	
	Cont=1;
	while(Cont<=6){
	
		num_aluno = Cont;
		
		cout<<endl<<"Digite a primeira nota do aluno "<<num_aluno<<":";
		cin>>n1;
		
		cout<<"Digite a segunda nota do aluno: "<<num_aluno<<":";
		cin>>n2;
		
		soma_nota = n1 + n2;
		media=soma_nota/2;
		
		cout<<"A media do aluno eh: "<<media;
		
		Cont++;
		
		if(media<=3)
		{
			cout<<endl<<"Aluno reprovado";
		}else{
			if(media>3 && media<7)
			{
				cout<<endl<<"Aluno em exame";	
			}else{
				if(media>=7)
				{
					cout<<endl<<"Aluno aprovado";
				}
			}
		}
	soma_classe = soma_classe + soma_nota;	
    }
    media_total = soma_classe/12;
	cout<<endl<<"A media total da sala eh: "<<media_total;
}
