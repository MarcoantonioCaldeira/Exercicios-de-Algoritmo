#include<iostream>


using namespace std;

int Area_triangulo(int b, int a){
	
	int area = b * a;

	return area;
}

int Perimetro_triangulo(int l){
	
	int perimetro = l * l;
	
	return perimetro;
}



main(){
	int area, b, a, perimetro, l;
	
    cout<<"Digite o valor da base do triangulo: ";
    cin>>b;
    
    cout<<"Digte a altura do triangulo: ";
    cin>>a;
    
    cout<<"Digite o valor dos lados do triangulo: ";
    cin>>l;
    
    area = Area_triangulo(b, a);
    cout<<"A area do triangulo eh: "<<area;
    
    perimetro = Perimetro_triangulo(l); 
    cout<<endl<<"O valor do perimetro eh: "<<perimetro;
}
