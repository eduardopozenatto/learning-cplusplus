#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

double ReturnResult(char operador, int n1, int n2) {
  double resultado;

  switch (operador) {
    case '+':
      resultado = n1 + n2;
      cout << "Resultado: " << resultado << endl;
      break;

    case '-':
      resultado = n1 - n2;
      cout << "Resultado: " << resultado << endl;
      break;
  
    case '/':
      resultado = n1 / n2;
      cout << "Resultado: " << resultado << endl;
      break;

    case '*':
      resultado = n1 * n2;
      cout << "Resultado: " << resultado << endl;
      break;

    default:
      cout << "Digite um operador válido.";
      break;
  };

  return resultado;

};

int main() {
  cin.exceptions(ios::failbit | ios::badbit);
  
  double n1, n2, resultado;
  char operador;

  cout << "digite dois números e um operador aritmético (+, -, / ou *) para calcular: \n";
  try {
    cin >> n1;
    cin >> n2;
    cin >> operador;

    
    if (n1 == 0 || n2 == 0) {
      cout << "digite um número válido ou diferente de 0";

    } else {
      cout << ReturnResult(operador, n1, n2) << endl;
    
    };
    
    
  } catch(runtime_error e) {
    cout << "Insira um numero válido. erro: " << e.what();
  };
  
  return 0;
};