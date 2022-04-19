#include<iostream>

using namespace std;

int num;
int main()
{
   cout<<"Digite um numero de 1 ah 12: ";
   cin >> num;
   
   if( num == 1 || num ==3 || num == 4  || num == 5 || num == 6 || num == 7 || num == 8 || num == 9 || num == 10 || num == 11 || num == 12){
   	
   	  cout<<"O mes possui 30 dias";
   	  
   }else if(num == 2){
   	
   	  cout << "O mes possui 28 dias"; 
   	  
   }
}


