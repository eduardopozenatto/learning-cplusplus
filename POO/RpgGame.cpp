#include <iostream>
#include <unistd.h>
#include "rpg.h"
using namespace std;

int main() {
  cout << "Insira o nome do seu jogador: ";
  string nome; cin >> nome;
  cout << "Insira sua classe: ";
  string classe; cin >> classe;
  Personagem jogador(nome, classe);
  bool loop = true;

  while (loop) {
    cout << "Deseja ver seus atributos ou iniciar o jogo diretamente (ver/iniciar)?: ";
    string verAttr; cin >> verAttr;

    if (verAttr == "ver") { jogador.VerAtributos(); loop = false; }
    else if (verAttr != "iniciar") cout << "Insira uma das duas opções válidas." << endl; 
    else loop = false;
  }
  
  cout << "----- INICIANDO ------" << endl; sleep(1);

  cout << "Bem vindo ao RpgGame " << nome << "! Esse é seu jogo de batalha, onde vc irá conseguir itens e matar monstros! Siga o tutorial para aprender a jogar." << endl;
  
  return 0;
}