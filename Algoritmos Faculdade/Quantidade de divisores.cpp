#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

    int n,i,vdiv;

    cout << "Informe um numero inteiro\n";
    cin >> n;
    i = 1;
    vdiv = 1;
    while(n >= i){
        if (n % 2 == 0){
            vdiv += 1;
            i=i++;
        }
    }
    cout << vdiv << endl;

}
