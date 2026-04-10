#include <iostream>

using namespace std;

class Aluno {
  private:
    string _nome;
    int16_t _matricula;
    float _nota1;
    float _nota2;
    float _nota3;
    float _media;

  public:
    Aluno(string nome, int16_t matricula, float nota1, float nota2, float nota3) {
      _nome = nome;
      _matricula = matricula;
      _nota1 = nota1;
      _nota2 = nota2;
      _nota3 = nota3;
      _media = (_nota1 + _nota2 + _nota3) / 3;
    }

    void MédiaFinal () {
      cout << "A média final do aluno é: " << _media; 
    }

    void VerificarAprovacao () {
      if (_media >= 7) {
        cout << "O aluno está aprovado!" << endl;
      } else {
        cout << "O aluno foi reprovado." << endl;
      }
    }

    void ExibirAluno () {
      cout << "O Aluno " << _nome <<
      " de matrícula n°" << _matricula <<
      " tem uma média final de " << _media << "." << endl;
    }
};

int main () {
  cout << "Insira os dados do aluno: \n Nome: ";
  string nome; cin >> nome;

  cout << "Matrícula (máximo de 16 caracteres): ";
  int16_t matricula; cin >> matricula;

  cout << "Nota 1: ";
  float nota1; cin >> nota1;

  cout << "Nota 2: ";
  float nota2; cin >> nota2;

  cout << "Nota 3: ";
  float nota3; cin >> nota3;

  Aluno carlos(nome, matricula, nota1, nota2, nota3);

  bool loop = true;

  while (loop) {
    cout << "O que você deseja fazer (media, verificar, exibir, sair)?: ";
    string verificar; cin >> verificar;

    if (verificar == "media") {
      carlos.MédiaFinal();

    } else if (verificar == "verificar") {
      carlos.VerificarAprovacao();

    } else if (verificar == "exibir") {
      carlos.ExibirAluno();

    } else if (verificar == "sair") {
      cout << "Saindo..." << endl;
      loop = false;

    } else {
      cout << "Digite uma opção válida." << endl;
      
    }
  }

  return 0;
}