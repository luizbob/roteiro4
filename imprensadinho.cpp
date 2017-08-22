#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int x,n;
    srand(time(0));
    x=rand()%100+1;

    while(1){
        cout << "Digite um valor ou '0' para reiniciar o numero. Digite '-1' para sair: ";
        cin >> n;

        if(n==-1){
            break;
        }
        if(n==0){
            x=(rand()%100)+1;
        }else if(n>x){
            cout << "Valor inserido foi muito alto. Tente Novamente." << endl;
        }else if(n<x){
            cout << "Valor inserido foi muito baixo. Tente Novamente." << endl;
        }else if(n==x){
            cout << "Parabens.Voce adivinhou o numero. Saindo do jogo!" << endl;
            break;
        }
    }
    return 0;
}
