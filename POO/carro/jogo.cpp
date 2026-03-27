#include <iostream>
#include <unistd.h>
#include "carro.h"
using namespace std;

int main() {
  cout << "Bem vindo ao criador de carros! insira suas preferências abaixo: \nMarca: ";
  string marca;
  cin >> marca;

  cout << "Modelo: ";
  string modelo;
  cin >> modelo;

  cout << "cor: ";
  string cor;
  cin >> cor;

  Carro carro(marca, modelo, cor);

  sleep(1);

  bool loop = true;
  while (loop) {
    cout << "\nO que você deseja fazer agora (ver, acelerar, freiar, cor, abastecer ou sair)?: ";
    string resposta;
    cin >> resposta;
    
    sleep(1);

    if (resposta == "ver") {
      carro.estadoAtual();

    } else if (resposta == "acelerar") {
      cout << "\nquanto você deseja acelerar (em km/h, até 20 por vez)?: ";

      double aceleracao;
      cin >> aceleracao;
      carro.acelerarCarro(aceleracao);

    } else if (resposta == "abastecer") {
      cout << "\ninsira a quantidade (em litros) que deseja abastecer: ";
      double combustivel;
      cin >> combustivel;
      carro.abastecerCarro(combustivel);
    } else if (resposta == "sair") {
      cout << "saindo...";
      loop = false;
    }
  };

  return 0;
}