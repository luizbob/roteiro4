#include <iostream>

using namespace std;

double percentual(int votoj, int votot){
	double resultado=0;

	resultado = (votoj/(double)votot)*100;
	return resultado;

}
int main(int argc, char const *argv[])
{
	int votojogador[24] = {0}, njogador, quant = 0, aux = 0;
	double percentu, final;

	cout << "Enquete: Quem foi o melhor jogador? \n\n"<< endl;
	while(1){
		cout << "Numero do jogador (fim = 0): ";
		cin >> njogador;

		if (njogador == 0){
			break;
		}
		if (njogador > 23){
			cout << "Informe um valor entre 1 e 23" << endl;
		} else {
		votojogador[njogador]++;
		quant++;
		}
	}
	cout << "Resultado da votacao: "<< endl;

	cout << "Foram computados " << quant << "votos." << endl;


	cout << "Jogador  Votos" << endl;

	for(int i =0; i < 24; i++){
		if (votojogador[i] != 0){
			if (votojogador[i] > votojogador[aux]){
				aux = i;
			}
			percentu = percentual(votojogador[i], quant);
		cout << i << "\t" << votojogador[i] << "\t" <<  percentu << "porcento" << endl;
			
		}
	}
	final = percentual(votojogador[aux],quant);

cout << "O melhor jogador foi o numero" << aux << "com" << votojogador[aux] << "votos correspondendo a" << final <<  "porcento do total de votos.";

	return 0;
}