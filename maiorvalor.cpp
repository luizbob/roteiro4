#include <iostream>

using namespace std;

int main(){

    int n=0, m=0;

    while(1){
        cout << "Digite um valor '0' para sair: ";
        cin >> n;
        if(n>m){
            m = n;
        }
        if(n == 0){
            cout << "Maior valor foi: " << m << endl;
            return 1;
        }
    }
    return 0;
}
