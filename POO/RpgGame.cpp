#include <iostream>
#include "rpg.h"
using namespace std;

int main() {
  string nome;
  cout << "Insira o nome do seu jogador: ";
  cin >> nome;
  Personagem jogador(nome, 100, 2);
  jogador.VerAtributos();

  return 0;
}