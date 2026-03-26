#include <iostream>
#include <stdexcept>
using namespace std;

bool tratarErros() {


  return true;
}
int main() {
  cin.exceptions(ios::failbit | ios::badbit);
  cout << "Você pode inserir 10 valores dentro de um vetor. escolha com responsabilidade!";
  int vetor[10];
  string vetorMostrado;

  try {
    for (int i = 1; i <= 10; i++) {
      string vectorToString;
      int valor;
      cout << "Insira um valor para inserir na posição " << i << " do vetor: " << endl;
      cin >> valor;

      vetor[i] = valor;
      vectorToString = "[" + to_string(vetor[i]) + "]";
      vetorMostrado.append(vectorToString);

      cout << "vetor atualizado: " << vetorMostrado << endl; 

    };

    cout << "seu vetor final: " << vetorMostrado << endl; 

  } catch(runtime_error e) {
    cout << "insira números válidos! erro: " << e.what(); 
  }
  
  }