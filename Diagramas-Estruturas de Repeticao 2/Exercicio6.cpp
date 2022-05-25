#include<iostream>

using namespace std;

int Cont, c1, c2, c3, c4, c5, c6, quant_total, voto_branco=0, voto_nulo=0; //porcentagem_voto_nulo, porcentagem_votos_branco;
int main(){
	
	cout<<"SEJA BEM-VINDO. VAMOS COMECAR AS VOTACOES!!!";
	cout<<endl<<"PARA CANDIDATO 1 = 1";
	cout<<endl<<"PARA CANDIDATO 2 = 2";
	cout<<endl<<"PARA CANDIDATO 3 = 3";
	cout<<endl<<"PARA CANDIDATO 4 = 4";
	cout<<endl<<"PARA CANDIDATO 5 = 5";
	cout<<endl<<"PARA CANDIDATO 6 = 6";
	cout<<endl<<"PARA VOTO EM BRANCO = 7";
	cout<<endl<<"PARA VOTO NULO = 8";
	
	cout<<endl<<"Qual a quantidade total das pessoas que vao participar das eleicoes?: ";
	cin>>quant_total;//ira pegar a quantidade total de pessoas
	
	Cont=0;
	while(Cont<=quant_total){
		
		cout<<endl<<"Digite a sua escolha: ";
		cin>>Cont;//Parabens sua escolha foi armazenada
		
		if(Cont==1){
			//cout<<"Parabens voce votou no candidato 1";
			c1++;
		}else{
			if(Cont==2){
			    //cout<<"Parabens voce votou no candidato 2";
				c2++;	
			}else{
				if(Cont==3){
					//cout<<"Parabens voce votou no candidato 3";
				    c3++;
				}else{
					if(Cont==4){
						//cout<<"Parbens voce votou no candidato 4";
						c4++;
					}else{
						if(Cont==5){
							//cout<<"Parabens voce votou no candidato 5";
							c5++;
						}else{
							if(Cont==6){
								//cout<<"Parabens voce votou no candidato 6";
								c6++;
							}else{
								if(Cont==7){
									//cout<<"Seu voto e nulo";
				                    voto_nulo++;
								}else{
									if(Cont==8){
										//cout<<"Seu voto e em branco";
										voto_branco++;
									}
								}
							}
						}
					}
				}
			}
		}
	 	Cont++;
    }
	
	cout<<endl<<"O total de eleitores do candidato 1 eh: "<<c1;
	cout<<endl<<"O total de eleitores do candidato 2 eh: "<<c2;
	cout<<endl<<"O total de eleitores do candidato 3 eh: "<<c3;
	cout<<endl<<"O total de eleitores do candidato 4 eh: "<<c4;
	cout<<endl<<"O total de eleitores do candidato 5 eh: "<<c5;
	cout<<endl<<"O total de eleitores do candidato 6 eh: "<<c6;
	cout<<endl<<"O total de votos nulos eh: "<<voto_nulo;
	cout<<endl<<"O total de votos em branco eh: "<<voto_branco;
	cout<<endl<<"A porcentagem de votos nulos sobre o total de votos: "<<porcentagem_voto_nulo<<"%";
	cout<<endl<<"A porcentagem de votos em branco sobre o total de votos: "<<porcentagem_votos_branco<<"%";	
}


