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
            if (num2 != 0) { 
                res = num1 / num2;
                cout << "O resultado e: " << res << endl;
            } else {
                cout << "Erro: Divisao por zero!" << endl;
            }
            break;  
            
        case 'x':  
            res = num1 * num2;
            cout << "O resultado e: " << res << endl;
            break;  
            
        default:
            cout << "Operador invalido!" << endl;
    }

    return 0;

}
