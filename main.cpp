#include <iostream>
#include "Complex.cpp"
using namespace std;

Complex operator+ (Complex const &comp1, Complex const &comp2) {
  return Complex(comp1.real + comp2.real, comp1.imag + comp2.imag);
}

Complex operator- (Complex const &comp1, Complex const &comp2) {
  return Complex(comp1.real - comp2.real, comp1.imag - comp2.imag);
}

int main() {
  Complex myComplex(3, 2);

}
