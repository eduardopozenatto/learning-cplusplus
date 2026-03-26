#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdexcept>
using namespace std;

class user {
private:
  double saldo = 0;

public:
  void verSaldo();
  void depositarValor(int deposito);
  void sacarValor(int saque);

};

void refazer(user &usuario) {
  char chose;
  cin >> chose;
  switch (chose) {
    case 's':
      usuario.verSaldo();
      break;

    case 'n':
      cout << "saindo...";
      break;
    
    default:
      cout << "insira uma operação válida!";
      break;

  }
}

void user::verSaldo() {
  cout << "Seu saldo disponível: " << saldo << endl;
};

void user::sacarValor(int saque) {
  int saqueTemporario = saldo - saque;
  user usuario;

  if (saqueTemporario < 0) {
    cout << "você não pode sacar esse valor, pois é maior do que você tem na conta!" << endl;

  } else {
    saldo -= saque;
    cout << "Parabéns! Você sacou R$" << saque << ". Deseja ver seu saldo? (s, n): ";
    refazer(usuario);
  }
};

void user::depositarValor(int deposito) {
  saldo += deposito;
  char chose;
  cout << "parabéns! Você depositou R$" << deposito << " em sua conta. Deseja ver seu saldo? (s, n): ";
  cin >> chose;
  
  switch (chose) {
    case 's':
      verSaldo();
      break;

    case 'n':
      cout << "saindo...";
      break;
    
    default:
      cout << "insira uma operação válida!";

      break;
  }
  
}

string transformarParaMinuscula(string operacao) {
  transform(operacao.begin(), operacao.end(), operacao.begin(), ::tolower);
  return operacao;
}

bool escolherOperacao(string operacao, user &usuario) {
   if (operacao == "sacar") {
    double valor;
    cout << "insira o valor para sacar: ";
    cin >> valor;
    
    usuario.sacarValor(valor);
    
    return true;

   } else if (operacao == "depositar") {
    double deposito;
    cout << "insira o valor para depositar: ";
    cin >> deposito;
    usuario.depositarValor(deposito);

    return true;
    
   } else if (operacao == "conferir") {
    usuario.verSaldo();
    return true;
    
   } else if (operacao == "sair") {
    cout << "saindo...";
    return false;

   } else {
    cout << "Insira uma operação válida!" << endl;
    return false;

   } 
};

int main() {
  string operacao;
  user usuario;
  bool loop = true;

   cout << "----SEU BANCO---- \nVocê pode sacar, depositar e conferir o seu saldo bancário" << endl;

  while (loop) {
    cout << "Para executar alguma ação, insira alguma das ações anteriores ou saia do banco (sair): ";
    cin >> operacao;
    
    operacao = transformarParaMinuscula(operacao);

    loop = escolherOperacao(operacao, usuario);
  }
}