#include <iostream>
#ifndef carro_h
#define carro_h
using namespace std;

class Carro {
private:
  string _marca;
  string _modelo;
  string _cor;
  double _tanqueCombustivel;
  double _combustivelTotal;
  int _numeroPortas;
  double _velocidadeAtual;

public:
  Carro
  (
  string marca, string modelo, 
  string cor, double velocidadeAtual = 0, 
  double tanqueCombustivel = 0, double combustivelTotal = 50
    ) {
    _marca = marca;
    _modelo = modelo;
    _cor = cor;
    _velocidadeAtual = velocidadeAtual;
    _tanqueCombustivel = tanqueCombustivel;
    _combustivelTotal = combustivelTotal;

  };

  void estadoAtual() {
    cout << "Eu sou um carro da marca " <<
    this->_marca << ", modelo " <<
    this->_modelo << ", andando a " <<
    this->_velocidadeAtual << "Km/h e estou com " <<
    this->_tanqueCombustivel << "l de combustível";
  };

  void acelerarCarro(double aceleracao) {
    if (_tanqueCombustivel > ((_combustivelTotal / 100) * 5)) {
      if((_velocidadeAtual + aceleracao) <= 110) {
        this->_velocidadeAtual += aceleracao;
        this->_tanqueCombustivel -= (_combustivelTotal / 100) * 2 + (aceleracao / 8);

      } else {
        cout << "vocẽ não pode mais acelerar, pois o limite permitido é 110km/h!";
      };
    } else {
      cout << "Você está sem combustível para andar, abasteça!";

    }
  };

  void freiarCarro(double freio) {
    if (_velocidadeAtual < freio) {
      cout << "Você não pode freiar mais que sua velocidade atual.\n";
    } else {
      _velocidadeAtual -= freio;
    }
  }

  void mostrarCor() {
    cout << "A cor do seu carro é: " << _cor << endl;

  }

  void abastecerCarro(double combustivel) {
    if ((_tanqueCombustivel + combustivel) > _combustivelTotal) {
      cout << "Seu tanque é limitado a " << _combustivelTotal << "l de gasolina";
    } else {
    _tanqueCombustivel += combustivel;
    }
  }
};

#endif