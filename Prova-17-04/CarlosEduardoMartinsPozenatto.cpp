#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

// Classe Produto

class Produto {
protected:
  string _nome;
  double _preco;
  int _qtdEstoque;
  int _qtd;

public:
  Produto(string nome, float preco, int qtd = 0, int qtdEstoque = 10) : _nome(nome), _preco(preco), _qtd(qtd), _qtdEstoque(qtdEstoque) {}

  void GetInformation() {
    cout << "Nome: " << this->_nome << ", Preço: " << this->_preco << ", Quantidade: " << this->_qtdEstoque << endl;
  }

  string GetName() { return this->_nome; }
  float GetPrice() {return this->_preco; }
  int Estoque() {return this->_qtdEstoque; }
  int GetQtd () { return this->_qtd; }

  void ReporEstoque(int repor) { this->_qtdEstoque += repor; }
};

vector<Produto> Produtos;

// Fim

// Classe Venda

class Venda {
private:
  double uniqueId;
  double valorTotal;
  vector<Produto> Carrinho;

public:
  Venda() {
    uniqueId = Carrinho.size() * 1234;
    valorTotal = 0;
  }

  void RegistrarVenda(string nome, float preco, int qtd) {
    Carrinho.push_back(Produto(nome, preco, qtd));
  }

  double ValorTotal () {
    for (int i = 0; i < Carrinho.size(); i++) {
      valorTotal = Carrinho[i].GetPrice() * Carrinho[i].GetQtd();
    }

    return this->valorTotal;
  }

  void verVenda() {
    cout << "Identificação: " << this->uniqueId << ", Preço: " << this->ValorTotal() << endl;
  }

  void verDetalhes() {
    cout << "Identificação: " << this->uniqueId << ", Preço: " << ValorTotal() << endl;
    cout << "Produtos:" << endl;
    for (int i = 0; i < Carrinho.size(); i++) {
      Carrinho[i].GetInformation();
    }
    
  }
};

vector<Venda> vendas;

// Fim

// Método para cadastrar produtos

void CadastrarProduto(string nome, float preco, int qtdEstoque)
{
  Produtos.push_back(Produto(nome, preco, 0, qtdEstoque));
}

// Fim

// Seção das operações referentes aos Produtos

void ProdutoOperacao() {
  cout << "--- Aba de Produtos ---" << endl;
  bool loop = true;

   while (loop) {
    cout << "O que deseja fazer (cadastrar, ver, repor, sair)?: ";
    string fazer; cin >> fazer;
    
    if (fazer == "cadastrar") {
      cout << "Digite o nome do produto: ";
      string nome;
      cin >> nome;

      cout << "Digite o preco do produto: ";
      float preco;
      cin >> preco;

      cout << "Digite a quantidade em estoque do seu produto: ";
      int qtdEstoque;
      cin >> qtdEstoque;

      CadastrarProduto(nome, preco, qtdEstoque);
    } 

    else if (fazer == "ver") {
      for (int i = 0; i < Produtos.size(); i++) {
        Produtos[i].GetInformation();
      }

    } else if (fazer == "repor") {
      cout << "Digite o nome do produto que deseja repor: ";
      string nome;
      cin >> nome;

      for (int i = 0; i < Produtos.size(); i++) {
        if (Produtos[i].GetName() == nome) {
          cout << "Insira a quantidade: ";
          int qtd; cin >> qtd;
          Produtos[i].ReporEstoque(qtd);
          break;

        } else {
          cout << "Não existe nenhum produto com este nome.";
        }
      }
    } else if (fazer == "sair") {
      cout << "saindo..." << endl;
      loop = false;
    } else {
      cout << "Digite uma operação válida." << endl;
      loop = false;
    }
  }
}

// Fim

// Seção das operações referentes as Vendas

void VendasOperacao() {
  bool loop = true;
  int vendasFeitas = 0;

  while (loop) {
    cout << "O que deseja fazer em vendas (registrar, visualizar, detalhes, total, sair)?: ";
    string fazer; cin >> fazer;

    if (fazer == "registrar") {
      bool loop2 = true;
      vendas.push_back(Venda());

      while (loop2) {
        cout << "Qual produto deseja adicionar à lista (ou digite 'sair', criará uma venda vazia)?: ";
        string nome; cin >> nome;

        if (nome == "sair") {
          cout << "Saindo..." << endl;
          break;

        } else {
          bool existProduct = false;

          for (int i = 0; i < Produtos.size(); i++) {
            if (Produtos[i].GetName() == nome) {
              existProduct = true;
              cout << "Qual quantidade?: ";
              int qtd; cin >> qtd;

              if (qtd > Produtos[i].Estoque()) {
                cout << "Não pode adicionar essa quantidade, não possui estoque." << endl;
                existProduct = false;
                break;

              } else {
                vendas[vendasFeitas].RegistrarVenda(Produtos[i].GetName(), Produtos[i].GetPrice(), qtd);
                vendasFeitas++;
                existProduct = true;
              }
            } else if (i == Produtos.size() && !existProduct) {
              cout << "Não foram encontrados produtos com esse nome." << endl;
              existProduct = false;
            }
          }
        }
        
      }
      
    } else if (fazer == "visualizar") {
      for (int i = 0; i < vendas.size(); i++) {
        vendas[i].verVenda();
      }

    } else if (fazer == "detalhes") {
      cout << "Qual venda deseja ver o valor (1, 2, 3...)?: ";
      int index; cin >> index;
      if (index < vendas.size() - 1) {
        cout << "Não possui essa venda. Insira um número menor." << endl;
      } else {
        vendas[index - 1].verDetalhes();
      }

    } else if (fazer == "total") {
      double valortotal;
      for (int j = 0; j < vendas.size(); j++) {
        valortotal += vendas[j].ValorTotal();
        
      }

      cout << "Valor total: " << valortotal << endl;

    } else if (fazer == "sair") {
      cout << "saindo..." << endl;
      loop = false;

    } else {
      cout << "Digite uma operação válida." << endl;
      loop = false;
    }
  }
} 

// Fim

// Função principal

int main()
{
  cout << "--- Mercado seu Zé ---" << endl;
  bool loop = true;

  while (loop) {
    cout << "Qual das operações a seguir deseja fazer (produto/vendas): ";
    string fazer;
    cin >> fazer;

    if (fazer == "produto")
    {
      ProdutoOperacao();
    }
    else if (fazer == "vendas")
    {
      VendasOperacao();
    }
    else
    {
      cout << "Digite uma operação válida." << endl;
      loop = false;
    }
  }
  

  return 0;
}