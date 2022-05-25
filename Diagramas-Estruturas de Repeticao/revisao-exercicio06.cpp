#include<iostream>

using namespace std;

int Cont, num;
char decisao;
int main(){
	
	cout<<"Digite um numero de 0 ate 12: ";
	cin>>num;
	
//1	do{
		
		if(num==1){
			cout<<"Janeiro";
		}else{
			if(num==2){
				cout<<"Fevereiro";
			}else{
				if(num==3){
					cout<<"Marco";
				}else{
					if(num==4){
						cout<<"Abriu";
					}else{
						if(num==5){
							cout<<"Maio";
						}else{
							if(num==6){
								cout<<"Junho";
							}else{
								if(num==7){
									cout<<"Julho";
								}else{
									if(num==8){
										cout<<"Agosto";
									}else{
										if(num==9){
											cout<<"Setembro";
										}else{
											if(num==10){
												cout<<"Outubro";
											}else{
												if(num==11){
													cout<<"Novembro";
												}else{
													if(num==12){
														cout<<"Dezembro";
													}else{
														if(num>=13){
															cout<<"Numero invalido";
															//cout<<endl<<"Tente novamente: [S/N]";
															//cin>>decisao;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}		
	//}//while(decisao='N');
}
