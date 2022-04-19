#include<iostream>

using namespace std;

double quant_estoque, quant_maxima, quant_minima, quant_media;
int main()
{
   cout<<"Quanto eh a quantidade em estoque?: ";
   cin>>quant_estoque;
   
   cout<<"Quanto eh a quantidade maxima?: ";
   cin>>quant_maxima;
   
   cout<<"Quanto eh a quantidade minima?: ";
   cin>>quant_minima;
   
   quant_media = (quant_maxima + quant_minima) /2;
   
   if(quant_estoque>=quant_media){
   	  cout<<"nao efetuar compra";
   } else{
   	 cout<<"efetuar compra";
   }
}
