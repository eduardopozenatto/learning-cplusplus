#include <iostream>
#include <unistd.h>
#include "rpg.h"
using namespace std;

int main() {
  cout << "Insira o nome do seu jogador: ";
  string nome; cin >> nome;
  cout << "Insira sua classe: ";
  string classe; cin >> classe;
  Personagem jogador(nome, 100, 2, classe);
  jogador.VerAtributos();

  cout << "----- INICIANDO ------" << endl; sleep(1);

  cout << "Bem vindo ao RpgGame " << nome << "! Esse é seu jogo de batalha, onde vc irá conseguir itens e matar monstros! Siga o tutorial para aprender a jogar." << endl;
  return 0;
}