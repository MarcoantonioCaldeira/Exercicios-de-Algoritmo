#include<iostream>

using namespace std;

int num1, num2, sub;
int main()
{
   cout<<"Digite um numero: ";
   cin>>num1;
   
   cout<<"Digite outro numero: ";
   cin>>num2;
   
   if(num1>num2){
   	 sub = num1 - num2;
   	 cout<<"A subtracao eh igual ah: "<<sub;
   }
   else{
   	 sub = num2 - num1;
   	 cout<<"A subtracao eh igual ah: "<<sub;
   }
}
