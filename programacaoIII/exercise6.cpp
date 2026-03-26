#include <iostream>
#include <stdexcept>
#include <cstring>
using namespace std;

struct user {
public:
  char nome[20];
  char senha[20];
};

bool verificarLogin (user users[3], char inserirNome[20], char inserirSenha[20]) {
  for (int i = 0; i < 3; i++) {
    if (strcmp(users[i].nome, inserirNome) == 0 && strcmp(users[i].senha, inserirSenha) == 0) {
      return true;
    }
  }

  return false;
}

int main() {
cin.exceptions(ios::failbit | ios::badbit);
int chances = 3;

 user users[3] = {
  {"carlos", "24681012"},
  {"eduardo", "24681012"},
  {"martins", "24681012"}
 };

 try {
  char inserirNome[20];
  char inserirSenha[20];

  while (chances > 0) {
    cout << "Digite seu nome: ";
    cin >> inserirNome;
    cout << "Digite sua senha: ";
    cin >> inserirSenha;

    if (verificarLogin(users, inserirNome, inserirSenha)) {
    cout << "Olá " << inserirNome << ". Você entrou no sistema." << endl;
    return 0;

    } else {
      --chances;
      cout << "Suas credenciais estão incorretas. Você tem mais " << chances << " tentativas." << endl;

    }
  }

 } catch(runtime_error e) {
  std::cerr << e.what() << '\n';
 }
 
 return 0;
}