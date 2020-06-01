#include "Complex.hpp"

Complex::Complex (double real, double imag): real(real), imag(imag) {}

double Complex::getReal() {
  return real;
}
double Complex::getImag() {
  return imag;
}

void Complex::setReal(double real) {
  this->real = real;
}
void Complex::setImag(double imag) {
  this->imag = imag;
}

Complex operator+ (Complex const &comp1, Complex const &comp2) {
  return Complex(comp1.real + comp2.real, comp1.imag + comp2.imag);
}
Complex operator- (Complex const &comp1, Complex const &comp2) {
  return Complex(comp1.real - comp2.real, comp1.imag - comp2.imag);
}

std::ostream& operator<< (std::ostream &os, Complex const &comp) {
    os << "( " << comp.real << ", " << comp.imag << ")";
    return os;
  }