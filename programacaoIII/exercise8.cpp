#include <iostream>
#include <iomanip>
#include <unistd.h>

using namespace std;

double nota1 = 0;
double nota2 = 0;
double nota3 = 0;
double nota4 = 0;
bool loop = true;
int nota = 0;

void lerNota()
{
  try {
    cin >> nota;
    switch (nota) {
    case 1:
      cout << "Insira o valor da nota 1: ";
      if (nota1 != 0) {
        cout << "Você já inseriu um valor a essa nota." << endl;
        sleep(1);
      } else {
        cin >> nota1;
        sleep(1);
      };

      break;
    case 2:
      cout << "Insira o valor da nota 2: ";
      
      if (nota2 != 0)
      {
        cout << "Você já inseriu um valor a essa nota." << endl;
        sleep(1);
      }
      else
      {
        cin >> nota2;
        sleep(1);
      };

      break;

    case 3:
      cout << "Insira o valor da nota 3: ";
      
      if (nota3 != 0)
      {
        cout << "Você já inseriu um valor a essa nota." << endl;
        sleep(1);
      }
      else
      {
        cin >> nota3;
        sleep(1);
      }

      break;

    case 4:
      cout << "Insira o valor da nota 4: ";
      if (nota4 != 0) {
        cout << "Você já inseriu um valor a essa nota." << endl;
        sleep(1);
      }
      else
      {
        cin >> nota4;
        sleep(1);
      }

      break;

    default:
      cout << "Insira um número válido.";
      sleep(1);
      break;
    }
  }
  catch (runtime_error e)
  {
    cout << "Insira um valor válido. Erro: " << e.what();
    sleep(1);
  }
}

int main() {
  cin.exceptions(ios::failbit | ios::badbit);
  cout << "----- Bem-vindo ao calculador de médias! ------\n Siga as instruções abaixo para utilizá-lo." << endl;
  double media;

  try {
    while (loop) {
      if (nota1 != 0 && nota2 != 0 && nota3 != 0 && nota4 != 0) {
        char snMedia;
        cout << "Deseja mostrar a média das quatro notas (s/n)? ";
        cin >> snMedia;
        if (snMedia == 's') {
          media = (nota1 + nota2 + nota3 + nota4) / 4;
          cout << "A média das 4 notas é " << fixed << setprecision(2) << media << endl;
          loop = false;

        } else {
          loop = false;
        }

      } else {
        cout << "Deseja inseria qual nota (1, 2, 3, 4)?: ";
        lerNota();
      }
    }
  }
  catch (const std::exception &e)
  {
    std::cerr << e.what() << '\n';
  }
}