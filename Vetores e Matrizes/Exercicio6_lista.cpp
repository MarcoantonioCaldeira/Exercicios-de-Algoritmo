#include <iostream>
#include <locale.h>


using namespace std;
       
       
       
void LerVetor(int Vetor[300], int Tamanho)
{
   int Cont;

   for (Cont = 0; Cont < Tamanho; Cont++)
   {
       cout << "Entre com o elemento [" << Cont << "]: ";
       cin >> Vetor[Cont];
   }
}


void ImprimirVetor(int Vetor[300], int Tamanho)
{
    int Cont;

   for (Cont = 0; Cont < Tamanho; Cont++)
   {
       cout << Vetor[Cont] << " ";
   }
}



int Vetor[300], Tamanho;

main()
{

   setlocale (LC_ALL,"Portuguese");

   cout << "Tamanho do vetor:   ";
   cin >> Tamanho;

   LerVetor(Vetor, Tamanho);
   ImprimirVetor(Vetor, Tamanho);

} 
