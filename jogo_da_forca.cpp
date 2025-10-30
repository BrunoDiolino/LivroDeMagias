#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

string palavra_secreta;
map<char, bool> chutou;
vector<char> chutes_errados;

bool letra_existe(char chute) {
  for (char letra : palavra_secreta) {
    if (chute == letra) {
      return true;
    }
  }
  return false;
}

bool nao_acertou() {
  for (char letra : palavra_secreta) {
    if (!chutou[letra]) {
      return true;
    }
  }
  return false;
}

bool nao_enforcou() { return chutes_errados.size() < 5; }

void imprimir_cabecalho() { cout << " BEM VINDO AO JOGO DA FORCA" << endl; }

void imprimir_erro() {
  for (char letra : chutes_errados) {
    cout << letra << " ";
  }
  cout << endl;
}

void imprimir_palavra() {
  for (char letra : palavra_secreta) {
    if (chutou[letra]) {
      cout << letra << " ";
    } else {
      cout << "_ ";
    }
  }
  cout << endl;
}

void chuta() {
  cout << "Seu chute:" << endl;
  char chute;
  cin >> chute;

  chutou[chute] = true;

  if (letra_existe(chute)) {
    cout << "Você acertou, seu chute está na palavra!!" << endl;
  } else {
    cout << "Você errou , seu chute não estão na palavra!!" << endl;
    chutes_errados.push_back(chute);
  }
  cout << endl;
}

vector<string> le_arquivo() {
  ifstream arquivo;
  arquivo.open("lista_palavras.txt");

  if (arquivo.is_open()) {
    int quantidade_de_palavras;
    arquivo >> quantidade_de_palavras;

    vector<string> palavras_do_arquivo;

    for (int i = 0; i < quantidade_de_palavras; i++) {
      string palavra_lida;
      arquivo >> palavra_lida;
      palavras_do_arquivo.push_back(palavra_lida);
    }
    arquivo.close();
    return palavras_do_arquivo;
  } else {
    cout << "Nao foi possivel acessar o banco de palavras" << endl;
    exit(0);
  }
}

void sorteia_palvra() {
  vector<string> lista_palavras = le_arquivo();

  srand(time(NULL));
  int indice_sorteado = rand() % lista_palavras.size();

  palavra_secreta = lista_palavras[indice_sorteado];
}

void salva_arquivo(vector<string> nova_lista) {
  ofstream arquivo;
  arquivo.open(lista_palavras.txt) if (arquivo is_open) {
    arquivo << nova_lista.size() << endl;

    for (string palvra : nova_lista) {
      arquivo << palavra << endl;
    }
    arquivo.close();
  }
  else {
    cout << "Nao foi possivel acessar o banco de palavras" << endl;
    exit(0);
  }
}
void adiciona_palavra() {
  cout << Escreva a nova palavra : << endl;
  string nova_palavra;
  cin >> nova_palavra;

  vector<string> lista_palavras = le_arquivo();
  lista_palavras.push_back(nova_palavra)

      salva_arquivo(lista_palavras)
}
int main() {

  imprimir_cabecalho();

  le_arquivo();

  sorteia_palavra();

  while (nao_enforcou() && nao_acertou()) {

    imprimir_erro();

    imprimir_palavra();

    chuta();
  }

  cout << "FIM DE JOGO!!" << endl;
  cout << "A PALAVRA SECRETA ERA " << palavra_secreta << endl;
  if (nao_acertou()) {
    cout << "VOCÊ PERDEU!! TENTE NOVAMENTE" << endl;
  } else {
    cout << "PARABÉNS, VOCÊ GANHOU!!" << endl;
    cout << "VOCÊ DESEJA ADIOCNAR UMA NOVA PALAVRA AO BANCO (S/N)?" << endl;
    char resposta;
    cin >> resposta;
    if (resposta == 'S') {
      adiciona_palavra();
    }
  }
}
