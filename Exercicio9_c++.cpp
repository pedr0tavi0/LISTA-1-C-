#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;


float cres_decres(float);
float* cres_decres(float *vetor){
	float maior, menor;
	maior = vetor[0];
	menor = vetor[0];
	for(int i =0 ; i < 10; i++){
		
		
		
		if(maior < vetor[i]){
			
			maior = vetor[i];		
		}
		for(int i =0 ; i < 10; i++){
	
				
		if(menor > vetor[i]){
			
			menor = vetor[i];
		
		}
			
}
}
	float vet[2];
	vet[0] = menor;
	vet[1] = maior;
	
	return vet;
	
}
int main() {
	setlocale(LC_ALL,"Portuguese");
	
	float vetor[10], valor;
	
	for(int i = 0; i < 10; i++){
		cout<< "Insira um valor : ";
		cin >> valor;
		vetor[i] = valor;
	}
	float* vet = cres_decres(vetor);
	
	cout<<"O Maior valor é: "<< vet[1] <<"\n "<<" O menor valor é: " << vet[0]; 
	delete[] vet;
	
	
}
