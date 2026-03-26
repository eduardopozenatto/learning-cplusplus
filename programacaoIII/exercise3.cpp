#include <iostream>
#include <algorithm>
#include <cctype>
#include <stdexcept>
using namespace std;

class user {
private:
  int saldo;

public:
  void verSaldo(int ver);
  void depositarValor(int deposito);
  void sacarValor(int saque);

};

void user::sacarValor(int saque) {
  int saqueTemporario = saldo - saque;

  if (saqueTemporario < 0) {
    cout << "você não pode sacar esse valor, pois é maior do que você tem na conta!";

  } else {
    saldo -= saque;
    cout << "Parabéns! Você sacou R$" << saque << ". Deseja ver seu saldo? (s, n): ";

  }
};

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

   } else if (operacao == "depositar") {
    
   } else if (operacao == "conferir") {
    
   } else if (operacao == "sair") {
    return false;

   } else {
    cout << "Insira uma operação válida!";

   } 
};

int main() {
  string operacao;
  user usuario;

  while (true) {
    cout << "----SEU BANCO---- \nVocê pode sacar, depositar e conferir o seu saldo bancário\nPara executar alguma ação, insira alguma das ações anteriores ou saia do banco (sair): ";
    cin >> operacao;
    
    operacao = transformarParaMinuscula(operacao);

    escolherOperacao(operacao, usuario);
  }
}