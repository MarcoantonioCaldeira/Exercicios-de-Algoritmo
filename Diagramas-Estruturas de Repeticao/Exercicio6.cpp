#include<iostream>

using namespace std;

int Cont, num;
char N;
int main()
{
	cout<<"Digite o numero correspondente ao mes: ";
	cin>>num;
	
	Cont = num;
	do{	
		        if(Cont==1){
			        cout<<"Janeiro";
			        break;
		        }else{
				    if(Cont==2){
					    cout<<"Fevereiro";
					    break;
				    }else{
						if(Cont==3){
							cout<<"Marco";
							break;
						}else{
							if(Cont==4){
								cout<<"Abril";
								break;
							}else{
								if(Cont==5){
									cout<<"Maio";
									break;		
								}else{
									if(Cont==6){
										cout<<"Junho";
										break;
									}else{
										if(Cont==7){
											cout<<"Julho";
											break;
										}else{
											if(Cont==8){
												cout<<"Agosto";
												break;
											}else{
												if(Cont==9){
													cout<<"Setembro";
													break;
												}else{
													if(Cont==10){
														cout<<"Outubro";
														break;
													}else{
														if(Cont==11){
															cout<<"Novembro";
															break;
														    }else{
														    	if(Cont==12){
														    		cout<<"Dezembro";
																}else{
																	if(Cont>12){
																		cout<<"Mes invalido";
																		cout<<"Digite novamente[S/N]";
																		cin>>N;
																	
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
					
			   Cont++;			
		       }while(Cont='N');
		      
			           
	}

