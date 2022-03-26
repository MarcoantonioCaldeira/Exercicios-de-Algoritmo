#include<iostream>
using namespace std;

int main() {
	
	int media, n1, n2, n3;
	
	cout<<"Digite a primeira nota";
	    cin>>n1;
	cout<<"Digite a segunda nota";
	    cin>>n2;
	cout<<"Digite a terceira nota";
	    cin>>n3;
	
	media = (n1 + n2 + n3) / 3;
	cout<<"Media e igual ah" << media;
	
	    if(media<5) {
	    	cout<<"Aluno reprovado";
		}else if(media==6){
			     cout<<"Aluno de recuperacao";
		        }else if(media>6){
		        	     cout<<"Aluno aprovado";
				        }
				  
	return 0;
}

