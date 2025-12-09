#include <iostream>
using namespace std;

int main() {
    float num1, num2, res;
    char op;

    cout << "Escolha o primeiro numero: ";
    cin >> num1;
    
    cout << "Escolha o operador (+, -, /, x): ";
    cin >> op;
    
    cout << "Escolha o segundo numero: ";
    cin >> num2;

    switch (op) {
        case '+':
            res = num1 + num2;
            cout << "O resultado e: " << res << endl;
            break;
            
        case '-':
            res = num1 - num2;
            cout << "O resultado e: " << res << endl;
            break;
            
        case '/':
            if (num2 != 0) {  // Correção: != em vez de != =
                res = num1 / num2;
                cout << "O resultado e: " << res << endl;
            } else {
                cout << "Erro: Divisao por zero!" << endl;
            }
            break;  // Adicionado break para evitar fall-through
            
        case 'x':  // ou case '*' se preferir o símbolo padrão de multiplicação
            res = num1 * num2;
            cout << "O resultado e: " << res << endl;
            break;  // Removido o "breal;" errado
            
        default:
            cout << "Operador invalido!" << endl;
    }

    return 0;
}