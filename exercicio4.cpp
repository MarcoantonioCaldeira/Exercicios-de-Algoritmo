#include<iostream>
using namespace std;

int main() {
	int num, ant, sus;
	
	cout<<"Digite um numero";
	cin >> num;
	
	ant = num - 1;
	sus = num + 1;
	
	cout<<"O sucesor de"<<num<<"eh"<<sus;
	cout<<"O antecessor de"<<num<<"eh"<<ant; 

	return 0;
}
