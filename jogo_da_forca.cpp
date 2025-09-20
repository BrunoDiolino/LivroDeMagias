#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

const string PALAVRA_SECRETA = "MELANCIA"; 
map<char, bool> chutou;
vector<char> chutes_errados;

bool letra_existe(char chute){
    for(char letra: PALAVRA_SECRETA){
        if (chute == letra){
            return true;
        }
    }
    return false;
}

bool n_acertou(){
    for(char letra: PALAVRA_SECRETA){
        if (!chutou[letra]){
            return true;
        }
    }
    return false;
}

bool n_enforcou(){
    return chutes_errados.size() < 5;
}

int main(){

    cout << " BEM VINDO AO JOGO DA FORCA" << endl;

    while (n_enforcou() && n_acertou()) {
      
        for(char letra: chutes_errados){
            cout << letra << " ";
        }
        cout << endl;

        for(char letra: PALAVRA_SECRETA){
            if (chutou[letra]) {
                cout << letra << " ";
            } else {
                cout << "_ ";
            }
        }
      cout << endl;

        char chute;
       cin >> chute;

        chutou[chute] = true;

        if (letra_existe(chute)){
            cout <<"Você acertou, seu chute está na palavra!!"<< endl;
        }
        else{
            cout<<"Você errou , seu chute não estão na palavra!!"<< endl;
            chutes_errados.push_back(chute);
        }
    }
    cout << "FIM DE JOGO!!" << endl;
    cout <<"A PALAVRA SECRETA ERA " << PALAVRA_SECRETA << endl;
    if (n_acertou()){
        cout<<"VOCÊ PERDEU!! TENTE NOVAMENTE"<< endl;
    } else {
        cout<<"PARABÉNS, VOCÊ GANHOU!!"<< endl;
    }
}