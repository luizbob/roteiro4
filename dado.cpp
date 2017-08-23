#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double Porcento(int x, int i){
    double porcent=0;
    porcent = ((x/(double)i)*100);
    return porcent;
}

int main(){
    int x,n,i=0,l[7]={0},aux=0,ld=1;
    double result=0;
    srand(time(0));
    cout << "Digite o numero de vezes para lancar o dado: ";
    cin >> n;
    for(i=0;i<n;i++){
        cout << "Dado lancado. " << i+1 << " vez(es)" << endl;
        x = (rand()%6)+1;
        l[x]++;
    }

    for(aux=1,ld=1;aux<=6,ld<=6;aux++,ld++){
        result = Porcento(l[aux],i);
        cout << endl;
        cout << "Lado " << ld <<" foi jogado " << l[aux] << " vezes." << endl;
        cout << result << endl;
    }


    return 0;
}