#include <iostream>
using namespace std;

int main() {
  int idade, nascimento;
  string name;

  cout << "----INFORME SEU NOME E SUA IDADE:----\nIdade: ";

  cin >> idade;
  cout << "Nome: ";
  cin >> name;

  if (idade > 130) {
    cout << "Insira uma idade real!";

  } else if (idade < 0) {
    cout << "Não é permitido idade negativa!";
    
  } else {
    nascimento = 2026 - idade;
    cout << "Boas vindas " << name << "\nVocê nasceu em " << nascimento;
  
  }

  return 0;
}