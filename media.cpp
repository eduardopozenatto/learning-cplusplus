#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

string doubleToString(double valor, int casasDecimais) {
  ostringstream oss;
  oss << fixed << setprecision(casasDecimais) << valor;
  
  return oss.str();
};

int main () {
  double media, n1, n2, n3;

  cout << "Digite 3 números para fazer a média: \n";
  cin >> n1;
  cin >> n2;
  cin >> n3;

  media = (n1 + n2 + n3) / 3;
  string refactoredMedia = doubleToString(media, 2);
  string resultado = (media > 7) ? ("Aprovado!\nMédia: " + refactoredMedia) : ("Reprovado\nMédia: " + refactoredMedia); 
  cout << resultado;
  return 0;
}