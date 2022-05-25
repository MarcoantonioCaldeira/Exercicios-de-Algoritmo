#include<iostream>

using namespace std;

int Cont,idade;
float faixa_etaria1, faixa_etaria2, faixa_etaria3, faixa_etaria4, faixa_etaria5, porcentagem1, porcentagem2, porcentagem3, porcentagem4, porcentagem5;
int main(){
	Cont = 1;
	while(Cont<=15){
		
	  cout<<endl<<"Qual a sua idade?: ";
	  cin>>idade;
	  Cont++;
	  
	  if(idade>=1 && idade<=15){
	  	  porcentagem1 = faixa_etaria1 * 15/100;
	  	  faixa_etaria1++;
	  }else{
	  	if(idade>=16 && idade<=30){
	  	    faixa_etaria2++;
	  	    porcentagem2 = faixa_etaria2 * 15/100;
		  }else{
		  	if(idade>=31 && idade<=45){
		  		faixa_etaria3++;
		  		porcentagem3 = faixa_etaria3 * 15/100;
			  }else{
			  	if(idade>=46 && idade<=60){
			  		faixa_etaria4++;
			  		porcentagem4 = faixa_etaria4 * 15/100;
				  }else{
				  	if(idade>=61){
				  		faixa_etaria5++;
				  		porcentagem5 = faixa_etaria5 * 15/100;
					  }
				  }
			  }
		  }
	  } 
	  
	}
	cout<<endl<<"O numero de pessoas de 1 ah 15 anos de idade eh igual ah: "<<faixa_etaria1<<" e a porcentagem e igual ah"<<porcentagem1;	
	cout<<endl<<"O numero de pessoas de 16 ah 30 anos de idade eh igual ah: "<<faixa_etaria2<<" e a porcentagem e igual ah"<<porcentagem2;
	cout<<endl<<"O numero de pessoas de 31 ah 45 anos de idade eh igual ah: "<<faixa_etaria3<<" e a porcentagem e igual ah"<<porcentagem3;
	cout<<endl<<"O numero de pessoas de 46 ah 60 anos de idade eh igual ah: "<<faixa_etaria4<<" e a porcentagem e igual ah"<<porcentagem4;
	cout<<endl<<"O numero de pessoas maior que 61 anos de idade eh igual ah: "<<faixa_etaria5<<" e a porcentagem e igual ah"<<porcentagem5;
}
