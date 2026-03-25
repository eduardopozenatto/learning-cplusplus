#include <iostream>
using namespace std;

int main() {
  cout << "Você pode inserir 10 valores dentro de um vetor. escolha com responsabilidade!";
  int vetor[10];
  string vetorMostrado;
  string vetorAtualizado;

  for (int i = 1; i <= 10; i++) {
    int valor;
    cout << "Insira um valor para inserir na posição " << i << " do vetor: ";
    cin >> valor;
    vetor[i] = valor;
    vetorAtualizado = "[" + to_string(vetor[i]) + "]";
    vetorMostrado.append(vetorAtualizado);

    cout << "vetor atualizado: " << vetorMostrado << endl; 
  };
}