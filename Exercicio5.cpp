#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;


int main() {
	char nome[15], sobrenome[15], nome_completo[40];
	int total;
	
	cout << "Informe seu nome: \n";
	cin >> nome;
	cout << "Informe seu sobrenome: \n";
	cin >> sobrenome;
	
	if(strcmp(nome,sobrenome) == 1){
		strcat(nome,sobrenome);
		cout << nome;
	}else if(strcmp(nome,sobrenome)== 0){
		strcpy(nome_completo,nome);
		strcat(nome_completo," ");
		strcat(nome_completo, sobrenome);
		cout << nome_completo<< "\n";
		total = strlen(nome_completo);
		cout<<"Quantidade de caracteres e: " << total;
	}else{
		cout << "Sobrenome: " << sobrenome<< "\n";
		
		cout << "Nome: " << nome;
	}
}
