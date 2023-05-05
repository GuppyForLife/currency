#include <iostream>

int main() {
  double pesos, reais, soles;
  double dollars;

  std::cout << "Enter the number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter the number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter the number of Peruvian Soles: ";
  std::cin >> soles;

  // Pesos conversion rate: 0.00032
  // Reais conversion rate: 0.27
  // Soles conversion rate: 0.3

  dollars = 0.00032 * pesos + 0.27 * reais + 0.3 * soles;

  std::cout << "US Dollars = $" << dollars << "\n";
}