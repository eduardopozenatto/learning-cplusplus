#include <iostream>

using namespace std;

struct Retangulo {
  float _base;
  float _altura;

  Retangulo (float base, float altura) {
    _base = base;
    _altura = altura;
  }

  void CalcularÁrea () {
    float A = _base * _altura;
    cout << "A área do retângulo é " << A << "m²." << endl;

  }

  void CalcularPerimetro () {
    float P = 2 * (_base * _altura);
    cout << "O perímetro do retângulo é " << P << " metros." << endl;

  }

  void ExibirRetangulo () {
    cout << "As dimensões do retângulo são:\n" <<
    "Base: " << _base << "\nAltura: " << _altura << endl;
  }
};

int main () {
  cout << "Vamos construir um retângulo!\n Digite o valor da base: ";
  float base; cin >> base;

  cout << "Digite o valor da altura: ";
  float altura; cin >> altura;

  Retangulo retangulo (base, altura);

  bool loop = true;

  while (loop) {
    cout << "O que você deseja fazer agora (area, perimetro, exibir, sair)?: ";
    string verificar; cin >> verificar;

    if (verificar == "area") {
      retangulo.CalcularÁrea();

    } else if (verificar == "perimetro") {
      retangulo.CalcularPerimetro();

    } else if (verificar == "exibir") {
      retangulo.ExibirRetangulo();

    } else if (verificar == "sair") {
      cout << "Saindo..." << endl;
      loop = false;

    } else {
      cout << "Digite uma opção válida." << endl;
      
    }
  }

  return 0;
}
