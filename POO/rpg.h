#include <iostream>
#ifndef rpg_h
#define rpg_h
using namespace std;

class Personagem {
private: 
    string nome;
    int vida;
    int ataque;

public:
  Personagem::Personagem(string n, int v, int a) {
    nome = n;
    vida = v;
    ataque = a;
  };
  void VerAtributos() {
    cout << "Nome: " << nome << "\nVida: " << vida << "\nAtaque: " << ataque << endl;
  };
};

#endif