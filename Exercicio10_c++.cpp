#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <locale.h>

using namespace std;

void resultado(int);

void resultado(int n){
	int div;
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			div++;
		}
	}
	if(div == 2){
		cout << "O valor é primo";
		
	}else{
		
		if(n %2 == 0){
			cout << "O valor  é par";
		}else{
			cout<< "O valor é impar";
		}
	}
	
	
}




int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	
	cout << "Insira um numero : \n";
	cin >> n;
	
	resultado(n);
	

	
	
}
