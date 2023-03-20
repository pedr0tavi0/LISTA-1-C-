#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	double vet[9], valor;
	for(int i = 0; i < 10; i++){
		
		cout << "Insira um valor a ser corrigido: \n";
		cin >> valor;
		
		vet[i] = valor * 1.15;
		
		
		
		
	}
	
	cout << " Valores com aumento da  inflacao : \n ";
	 
	 
	for(int i = 0; i< 10; i++){
	
		
		cout<< "\n valor "<<"R$"<< vet[i];
	
	}

}
