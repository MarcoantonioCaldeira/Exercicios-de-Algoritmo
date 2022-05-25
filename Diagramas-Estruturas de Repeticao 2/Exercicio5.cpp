#include<iostream>
using namespace std;

int num, Cont, Cont_num, divisor=0;
int main(){
	
	for(Cont=1; Cont<=10; Cont++){
		
		cout<<endl<<"Digite um valor: ";
	    cin>>num;
	
	    for(Cont_num=1; Cont_num<=num; Cont_num++){
	  
		    if(num%Cont_num==0){
		      divisor++;
		    }
	    }
	    
		if(divisor==2){
		  cout<<"E primo";
		}else{
		  cout<<"Nao eh primo";
		}	
	 	
	}
}
