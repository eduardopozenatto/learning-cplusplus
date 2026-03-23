#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double qtdItens, valorItem, total;

  cout << "------CALCULADORA DE TOTAL DE ITENS------\nInsira a quantidade de itens:";
  cin >> qtdItens;
  cout << "Insira o valor unitário de cada item: ";
  cin >> valorItem;
  
  total = qtdItens * valorItem;

  cout << "Preço final a pagar por " << qtdItens << " a ~R$" 
  << fixed << setprecision(2) << valorItem << ": ~R$" << total;
}