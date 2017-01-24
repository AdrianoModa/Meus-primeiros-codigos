#include<iostream>
#include<stdlib.h>
/*Solicitar 2 palavras como entrada e verificar se são iguais.*/
using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    string p1,p2;
    int i;
    cout << "Digite a primeira palavra:\n";
    getline(cin,p1);
    cout << "Digite a segunta palavras:\n";
    getline(cin,p2);

    if(p1 == p2){
        cout << "As palavras digitadas são iguais.\n";
        cout << "A Palavra digitada foi: " << p1 << endl;
    }
    else{
        cout << "As palavras digitadas não são iguais.\n";
    }
    system("pause");
}
