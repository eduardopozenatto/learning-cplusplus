#include <iostream>

using namespace std;

class Pessoa {
  private:
    string _nome;
    int _idade;
    float _altura;

  public:
    Pessoa (string nome, int idade, float altura) {
      _nome = nome;
      _idade = idade;
      _altura = altura;
    }

    void MeVer () {
      cout << "Olá, meu nome é " << _nome <<
      ", tenho " << _idade << " anos e minha altura é " <<
      _altura << " metros." << endl;
    }
};

int main () {
  cout << "Bem-vindo ao rpg game! Crie sua pessoa primeiro:" << endl;
  cout << "Insira seu nome: ";
  string nome; cin >> nome;

  cout << "Insira sua idade: ";
  int idade; cin >> idade;

  cout << "Insira sua altura: ";
  float altura; cin >> altura;

  Pessoa pessoa(nome, idade, altura);

  bool loop = true;

  while (loop) {
    cout << "Deseja ver sua pessoa(s/n)?: ";
    char verificar; cin >> verificar;

    if (verificar == 's') {
      pessoa.MeVer();
      loop = false;

    } else if (verificar == 'n') {
      cout << "Saindo..." << endl;
      loop = false;

    } else {
      "Escolha entre s ou n.";
    }
  }

  return 0;
}