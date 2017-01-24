#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int n,i;
    i = 1;
    setlocale(LC_ALL,"Portuguese");
    do {
        cout << "Informe um Número Inteiro Qualquer:\n";
    cin >> n;

    cout << "O Triplo de " << n << " é " << n*3 << "." << endl;
    i++;
    }
    while (n != -999);

    system("pause");
}
