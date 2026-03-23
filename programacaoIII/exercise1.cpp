#include <iostream>
#include <iomanip>
using namespace std;

double dividir(double a, double b) {
  if (b == 0.0) {
    throw invalid_argument("Divisão por zero ou por caracteres não é permitida!");
  }

  return a / b;
}

int main() {
  double number1, number2;
  cout << "Digite dois numeros inteiros para dividir: \n";
  cin >> number1 >> number2;

  try {
    double divisao = dividir(number1, number2);
    cout << "O resultado é: " << fixed << setprecision(2) << divisao;

  } catch (invalid_argument& e) {
    std::cerr << "Erro: " << e.what() << '\n';
  }

  return 0;

}