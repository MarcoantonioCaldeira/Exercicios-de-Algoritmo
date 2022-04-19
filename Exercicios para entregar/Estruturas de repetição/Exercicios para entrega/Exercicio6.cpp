#include<iostream>

using namespace std;

double n1, n2, n3, n4, media1, n_final;
int main()
{
  cout<<"Digite a nota 1: ";
  cin>>n1;
  
  cout<<"Digite a nota 2: ";
  cin>>n2;
  
  
  cout<<"Digite a nota 3: ";
  cin>>n3;
  
  
  cout<<"Digite a nota 4: ";
  cin>>n4;
  
  media1 = (n1 + n2 + n3 + n4)/4;
  cout<<"A media eh igual ah: "<<media1;
  
  if(media1 >= 7)
  {
  	cout<<"Aluno aprovado";
  	 
  }else{
  	cout<<"Digite a nota do exame final do aluno: ";
  	cin>> n_final;	 
  	 
  	if(n_final >= 5){
  	 	
  	 	cout<<"Aluno aprovado por exame final";
  	 	
	}else{
	   	  
	    cout<<"Aluno reprovado";
	}
  }
}
