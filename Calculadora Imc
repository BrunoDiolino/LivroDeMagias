#include <iostream>
#include <string>

using namespace std;

int main() {
    float Epeso, Ealtura, Imc;
    int Idade;
    string Sexo, Res;

    cout << "Insira seu peso em Kg" << endl;
    cin >> Epeso;
    cout << "Insira sua altura em metros" << endl;
    cin >> Ealtura;
    cout << "Insira seu sexo (M/F)" << endl;
    cin >> Sexo;
    cout << "Insira sua idade" << endl;
    cin >> Idade;

    Imc = Epeso / (Ealtura * Ealtura);

    if (Sexo == "M") {
        if (Imc < 20) {
            cout << "Abaixo do peso" << endl;
        } else if (Imc >= 20 && Imc <= 24.9) {
            cout << "Normal" << endl;
        } else if (Imc >= 25 && Imc <= 29.9) {
            cout << "Obesidade leve" << endl;
        } else if (Imc >= 30 && Imc <= 39.9) {
            cout << "Obesidade moderada" << endl;
        } else {
            cout << "Obesidade mórbida" << endl;
        }
        cin >> Res;
    } else if (Sexo == "F") {
        if (Imc < 19) {
            cout << "Abaixo do peso" << endl;
        } else if (Imc >= 19 && Imc <= 23.9) {
            cout << "Normal" << endl;
        } else if (Imc >= 24 && Imc <= 28.9) {
            cout << "Obesidade leve" << endl;
        } else if (Imc >= 29 && Imc <= 38.9) {
            cout << "Obesidade moderada" << endl;
        } else {
            cout << "Obesidade mórbida" << endl;
        }
        cin >> Res;
    } else {
        cout << "Sexo inválido!" << endl;
    }

    return 0;
}
