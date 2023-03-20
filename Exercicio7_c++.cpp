#include <iostream>
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int conta(int, int,int);

int conta(int n1, int n2, int n3){
	int soma;
	
	soma = (float)(n1*3)+(n2*n2) + (n3*n3);
	
	return (soma);
	
}


int main() {
	int cont = 0, n1, n2, n3, n4;
	float resultado;
	
	cout << "Insira o 1 valor : ";
	cin >> n1;
	cout << "Insira o 2 valor : ";
	cin >> n2;
	cout << "Insira o 3 valor : ";
	cin >> n3;
	cout << "Insira o 4 valor : ";
	cin >> n4;
	
	resultado = conta(n1,n2,n3);
	
	printf("%.2f",resultado);
}
