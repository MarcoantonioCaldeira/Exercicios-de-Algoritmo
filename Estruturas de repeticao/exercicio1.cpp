#include<iostream>


using namespace std;

int num;
int main(){
	setlocale (LC_ALL,"Portuguese");
	
	num = 1;
	while(num<=100)
	{  
	    if(num%2==0)
		{
		  cout<<num<<"\n";  
		} 
		num++;
	}
}

