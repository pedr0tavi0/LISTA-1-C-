#include <iostream>
#include <cstdlib>
using namespace std;



int main() {
	
	int numero = 1, multiplicador = 0;
	
	
	cout << "\t Tabuadas do 1 ate 9:  \n";
	
	while(multiplicador <= 10 ){
				
          while(numero <= 9){
		  int resultado = numero * multiplicador;
			
	      cout <<numero << "X" << multiplicador << ":" << resultado<< "\t";
			
			 
			
		  numero++;}
		
	cout << "\n";
	multiplicador++;
	numero = 1;}
}
