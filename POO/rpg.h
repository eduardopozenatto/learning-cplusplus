#include <iostream>
#ifndef rpg_h
#define rpg_h
using namespace std;

class Personagem {
private: 
    string _nome;
    int _vida;
    int _ataque;
    string _classe;

public:
    Personagem(string nome, int vida, int ataque, string classe) {
    _nome = nome;
    _vida = vida;
    _ataque = ataque;
    _classe = classe;

  };
  void VerAtributos() {
    cout << "Nome: " << _nome << "\nVida: " << _vida << "\nAtaque: " << _ataque << "\nClasse: " << _classe << endl;
  };

  string verNome() {
    return _nome;
  };
};

#endif