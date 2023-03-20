#include <iostream>
using namespace std;

int main() {

   int n, n1 = 0, n2 = 1, sequencia = 0;

  
    
    for (int i = 1; i <= 15; ++i) {
        if(i == 1) {
            cout << n1< ", ";}
        if(i == 2) {
            cout << n2 < ", ";}
        sequencia = n1 + n2;
        n1 = n2;
        n2 = sequencia;

        cout << sequencia << ", ";
    }
    return 0;
}
