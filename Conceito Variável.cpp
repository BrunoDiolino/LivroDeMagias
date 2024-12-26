#include <iostream>
#include <tchar.h>
using namespace std;

int main (){
	   _tsetlocale(LC_ALL, _T("portuguese")); //função que cofigura o console windows para mostrar acentos 
	   //declaração de variaveis  
	   //prmieiro colocamos qual tipo de variavel queremos que o computador crie
	   //ao executar o programa
	   //neste caso escolhemos ambas como int ( integer)
	   // ou seja o local da memoria que estamos solicitando ao computador 
	   //deve ser capaz de armazenar numeros inteiros 
	   int numvidas = 5;
		int score = 1350;
		cout << " ************ INICIO DO JOGO ***************** " << "/n";
		cout << "Vidas Jogador: " << numvidas << "/n";
		cout << "Score: " << score << "/n";
		cout << "Espaço que numvidas ocupa na memória Ram< " << &numvidas << "/n"; //& mostra o espaço em que está alocado a variavel e as informações
		cout << "Espaço que score ocupa na memória Ram< " << &score << "/n";

		cout << " ******************************************** " << "/n";
	
		cout << " ************ DURENTE O JOGO **************** " << "/n";
		score = score + 150; // score += 150;
		numvidas = numvidas - 1; // numvidas -= 1;
		cout << "Vidas Jogador: " << numvidas << "/n";
		cout << "Score: " << score << "/n";
		cout << " ******************************************** " << "/n";


		
		system("PAUSE"); 
		





	return 0;

}