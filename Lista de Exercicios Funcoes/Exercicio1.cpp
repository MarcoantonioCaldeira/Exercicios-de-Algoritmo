#include<iostream>


using namespace std;

int Convercao_graus(int F){
	
	int C;
	C = ((F-32)*5)/9;
	return C;
}



main(){
	int graus_f, graus_c;
	
	cout<<"Digite a temperatura em Graus Fahrenheit: ";
	cin>>graus_f;
	
	graus_c = Convercao_graus(graus_f);
	
    cout<<"A temperatura em Graus Celcius eh: "<<graus_c<<" graus celcius";
}
