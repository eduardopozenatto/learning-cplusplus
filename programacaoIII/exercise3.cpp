#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

string transformarParaMinuscula(string operacao) {
  transform(operacao.begin(), operacao.end(), operacao.begin(), ::tolower);
  return operacao;
}

int main() {
  string operacao;
  cout << "----SEU BANCO---- \nVocê pode sacar, depositar e conferir o seu saldo bancário.\nPara executar alguma ação, insira alguma das ações anteriores ou saia do banco (sair): ";
  cin >> operacao;
  
  operacao = transformarParaMinuscula(operacao);
  cout << operacao;


}