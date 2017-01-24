#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int soma,subtracao,a,b;
    char x;
    cout << "Entre com a operação matemática 'a' para Adiçao e 's' para Subtração:\n";
    cin >> x;
    switch (x){
        case 'a': cout << "Entre com um primeiro número\n"; cin >> a;
            cout << "Entre com o segundo número\n"; cin >> b;
            soma = a + b;
            cout << a << " + " << b << " = " << soma << endl;
            break;
        case 's': cout << "Entre com um primeiro número\n"; cin >> a;
            cout << "Entre com o segundo número\n"; cin >> b;
            subtracao = a - b;
            cout << a << " - " << b << " = " << subtracao << endl;
            break;
        default: cout << "Opção Inválida!";

    }
}
