#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  cin.exceptions(ios::failbit | ios::badbit);

  try {
    double decNumber;
    cout << "Insira um número decimal para descobrir a raiz quadrada: ";
    cin >> decNumber;
    double sqtNumber = sqrt(decNumber);
    cout << fixed << setprecision(4) << sqtNumber;
    
  } catch(runtime_error e) {
    std::cerr << e.what() << '\n';
    
  }
}