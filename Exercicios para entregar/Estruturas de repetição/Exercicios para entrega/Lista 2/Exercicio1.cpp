#include<iostream>

using namespace std;

int n1,n2,n3;
int main()
{
	cout<<"Digite o primeiro numero: ";
	cin>>n1;
	
	cout<<"Digite o primeiro numero: ";
	cin>>n2;
	
	cout<<"Digite o primeiro numero: ";
	cin>>n3;
	
	if(n1<n2)
	{
		if(n2<n3)
		{
			cout<<"A ordem decrescente dos numeros eh: "<<n3<<","<<n2<<","<<n1;
		}else{
				if(n1<n3)
				{  
				  cout<<"A ordem decrescente dos numeros eh: "<<n3<<","<<n1<<","<<n2;
				}else{
					    cout<<"A ordem decrescente dos numeros eh: "<<n1<<","<<n3<<","<<n2;
				     }
		     }
	}else{
			if(n2>n3)
			{
			   cout<<"A ordem decrescente dos numeros eh: "<<n1<<","<<n3<<","<<n2;
			}else{
				    if(n1>n3)
				    {
				    	cout<<"A ordem decrescente dos numeros eh: "<<n1<<","<<n3<<","<<n2;
					}else{
						
						 	cout<<"A ordem decrescente dos numeros eh: "<<n3<<","<<n1<<","<<n2;  
					     }
			     }
	     }
}
