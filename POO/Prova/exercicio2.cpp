#include <iostream>
using namespace std;

class ContaBancaria {
  private:
  int _numConta;
  float _saldo;

  public:
  ContaBancaria (int numConta, float saldo) {
    _numConta = numConta;
    _saldo = saldo;
  };

  void DepositarValor () {
    bool loop = true;
    while (loop) {
      cout << "Insira a quantidade do valor que deseja depositar: R$";
      float valor; cin >> valor;

      cout << "Você deseja depositar " << valor << " em sua conta (s/n)?: ";
      char verificacao; cin >> verificacao;

      if (verificacao == 's') {
        loop = false;
        _saldo += valor;

      } else {
        cout << "retornando...";
      }
    };
  };

  void SacarValor () {
    bool loop = true;

    while (loop) {
     cout << "Informe o número da sua conta: ";
     int numConta; cin >> numConta;

     if (_numConta == numConta) {
      cout << "Informe o valor que deseja sacar: R$";
      float saque; cin >> saque;

      cout << "Você deseja sacar " << saque << " de sua conta (s/n)?: ";
      char verificacao; cin >> verificacao;

      if (verificacao == 's') {
        _saldo -= saque;
        loop = false;

      } else {
        cout << "retornando..." << endl;
      };

     } else {
      cout << "Número da conta inválido. Tente novamente." << endl;
     };
    };
  };

  void ExibirSaldo () {
    bool loop = true;

    while (loop) {
     cout << "Informe o número da sua conta: ";
     int numConta; cin >> numConta;

     if (_numConta == numConta) {
      cout << "Saldo: " << _saldo;
      loop = false;

     } else {
      cout << "Número da conta inválido. Tente novamente." << endl;

     };
    };
  };

};

int main () {
  cout << "------ Bem vindo ao seu banco! ------" << endl;
  bool loop = true;
  while (loop) {
    cout << "O que você deseja fazer em sua conta (sacar, depositar, ver, sair)?: ";

    string fazer; cin >> fazer;

    ContaBancaria carlos(123456, 0);

    if (fazer == "sacar") {
      carlos.SacarValor();
      
    } else if (fazer == "depositar") {
      carlos.DepositarValor();

    } else if (fazer == "ver") {
      carlos.ExibirSaldo(); 

    } else if (fazer == "sair") {
      cout << "Saindo..." << endl;  
      loop = false;

    } else {
      cout << "Insira uma tarefa válida.";
    };
  }

  return 0;
}