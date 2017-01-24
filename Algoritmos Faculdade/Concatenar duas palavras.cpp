#include<iostream>
#include<stdlib.h>
#include<string.h>
/* Solicitar como entrada duas palavras e concatenar a 1ª com a 2ª em uma outra String.
Ex: p1 = "dia"; p2 = "ensolarado"; p3 = "dia ensolarado"; */
using namespace std;

int main(){

    string p1 = "dia";
    string p2 = " ensolarado";
    string p3;
    p3 = p1 + p2;
    cout << p3 << endl;

    system("pause");
}
