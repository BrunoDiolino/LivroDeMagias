#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

	cout << "***********************************************" << endl;
	cout << "     Bem-Vindo ao Jogo Da Adivinhação  " << endl;
	cout << "***********************************************" << endl;
	
	cout << "Escolha o nivel de dificuldade:" << endl;
	cout << "Fácil (F)" << endl << "Médiano (M)" << endl << "Difícil (D)" << endl;

	char dif;
	cin >> dif;
	
	int Num_Tentativas;
	
	if (dif == 'F') {
		Num_Tentativas = 15;
	}
	else if (dif == 'M') {
		Num_Tentativas = 10;
	}
	else {
		cout << "Boa-Sorte :)" << endl;
		Num_Tentativas = 5;
	}

	    int tentativas = 0;
		bool n_acertou = true;
		double pontos = 1000.0;


		for (tentativas = 1;tentativas <= Num_Tentativas;tentativas++);
		
		srand(time(NULL)); //para implementar 'rand' primeiro é necessário ,implementar as biliotecas c, implementar a raiz dela 
		const int NUM_SECRETO = rand(); // o numero não é necessariamente aletório, ele passa previamente por um processo que o dev escolhe

		cout << "Numero sercreto:"<< NUM_SECRETO << endl;

		int chute;
		cout << "Tentativa: " << tentativas << endl;
		cout << "Faça seu chute: " << endl;
		cin >> chute;

		double pontos_loss = abs(chute - NUM_SECRETO) / 2.0; ///ABSolute - entrega o valor absoluto e não o negativo 
		pontos = pontos - pontos_loss;

		cout << "O valor do chute é :" << chute << endl;

		bool acertou = chute == NUM_SECRETO;
		bool maior = chute > NUM_SECRETO;


		if (acertou) {
			cout << "Parabéns você acertou o chute!!!" << endl;
			
			n_acertou = false;
			break;
		}
		else if (maior) {
			cout << "Seu chute foi maior que o número sercreto! " << endl;
		}
		else {
			cout << "Seu chute foi menor que o número secreto" << endl;
		}

	if (n_acertou) {
		cout << "Você perdeu!Tente novamente!" << endl;
	}
	else {
		cout << "Você acertou em:" << tentativas << " tentativas" << endl;
		cout.precision(2); //para adicionar duas casas ou mais antes da virgula assim como usado para imprimir o valor da mesma forma quando se trata de dinheiro usamos o comando na frente do "cout" .precision(...) (lembrando que se faz isso uma linha antes da linha que se quer adicionar esse comando) 
		cout << fixed;
		cout << "Você fez:" << pontos << " pontos" << endl;
		cout << "fim de jogo" << endl;
	}

}
