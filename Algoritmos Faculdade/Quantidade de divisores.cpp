#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){

	setlocale(LC_ALL,"Portuguese");
    int n,i,vdiv;

    cout << "Informe um numero inteiro" << endl;
    cin >> n;
    i = 1;
    vdiv = 0;
    while(n >= i){
    	if(i == 1){
    		cout << n << " é divido por: ";
		}
        if (n % i == 0){
            cout << i << " ";
            vdiv = vdiv + 1;
        }
        i+=1;
    }
    if(vdiv == 2){
    	cout << "sendo assim o numero " << n << " é primo!";
	}
    
    cout << "\nTotal de " << vdiv << " divisores" << endl;

}
