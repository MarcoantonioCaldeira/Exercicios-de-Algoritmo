#include <iostream>

using namespace std;

int n = 1;
float soma, d;

int main(){

  for (d=1; d<=50; d++) {
    soma = soma + (n /d);
    n = n + 2;
  }

  cout<<endl<<"soma = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50";
  cout<<" = "<<soma;	
}
