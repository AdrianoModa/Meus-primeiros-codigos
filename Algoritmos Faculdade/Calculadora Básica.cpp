#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    int soma,subtracao,a,b;
    char x;
    cout << "Entre com a opera��o matem�tica 'a' para Adi�ao e 's' para Subtra��o:\n";
    cin >> x;
    switch (x){
        case 'a': cout << "Entre com um primeiro n�mero\n"; cin >> a;
            cout << "Entre com o segundo n�mero\n"; cin >> b;
            soma = a + b;
            cout << a << " + " << b << " = " << soma << endl;
            break;
        case 's': cout << "Entre com um primeiro n�mero\n"; cin >> a;
            cout << "Entre com o segundo n�mero\n"; cin >> b;
            subtracao = a - b;
            cout << a << " - " << b << " = " << subtracao << endl;
            break;
        default: cout << "Op��o Inv�lida!";

    }
}
