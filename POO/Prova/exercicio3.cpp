#include <iostream>

using namespace std;

class Produto {
private:
  string _nome;
  float _preco;
  int _qtdEstoque;

public:
  Produto (string nome, float preco, int qtdEstoque) {

  };

  void AtualizarPreco () {
    cout << "Adicione o novo preço do seu produto: ";
    float preco; cin >> preco; _preco = preco; 
  };

  void AtualizarEstoque() {
    bool loop = true;
    while (loop) {
      cout << "Deseja adicionar quantidade ou diminuir (adicionar, diminuir)?: ";
      string atualizar; cin >> atualizar;

      float qtd;

      if (atualizar == "adicionar") {
        cout << "Insira a quantidade que deseja adicionar ou diminuir: ";
        cin >> qtd;
         _qtdEstoque += qtd;
        loop = false;

      } else if (atualizar == "diminuir") {
        cout << "Insira a quantidade que deseja adicionar ou diminuir: ";
        cin >> qtd;
        _qtdEstoque -= qtd;
        loop = false;

      } else {
        cout << "Insira um método válido. " << endl;
      };

    };
    
  };

  void ExibirProduto() {
    cout << "Nome: " << _nome <<
    "\nQuantidade em Estoque: " << _qtdEstoque <<
    "\nPreço: " << _preco << endl; 
  };
};
