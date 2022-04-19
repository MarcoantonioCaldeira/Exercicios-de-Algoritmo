#include<iostream>

using namespace std;

int num;
int main()
{
  cout<<"Digite um numero: ";
  cin>>num;
  
  if(num <= 10)
  {
    cout<<"F1";	
    
  } else if(num > 10 && num <= 100){
  	
        cout<<"F2";	
        
	    }else if(num > 100){
	        
		   cout<<"F3"; 	    	
	  	
	    }
}
