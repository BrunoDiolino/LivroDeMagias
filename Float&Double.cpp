#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int nmr1;
	float nmr2 ;
	double nmr3 = 45350.904555;
	
	nmr1 = 45;
	nmr2 = 55.56f;

		cout << "Valor do Numero: " << nmr1 << "\n";
		cout << "tamanho da vriavel Numero" << sizeof(nmr1) << "Bytes" << "\n";
		cout << "endereço carregado na memória" << &nmr1 << "\n";

		cout << "Valor do Numero: " << nmr2 << "\n";
		cout << "tamanho da vriavel Numero" << sizeof(nmr2) << "Bytes" << "\n";
		cout << "endereço carregado na memória" << &nmr2 << "\n";

		cout << "Valor do Numero: " << setprecision(12) << nmr3 << "\n"; // setprecision vai mostrar o double de formar correta
		cout << "tamanho da vriavel Numero" << sizeof(nmr3) << "Bytes" << "\n";
		cout << "endereço carregado na memória" << &nmr3 << "\n";


		system("PAUSE");


	return 0;
}