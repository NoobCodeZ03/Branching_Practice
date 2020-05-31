#include <iostream>

class Complex
{
private:
  int real, imag;

public:
  Complex (int real, int imag): real(real), imag(imag) {}

  int getReal() {
    return real;
  }
  int getIcmag() {
    return imag;
  }

  void setReal(int real) {
    this->real = real;
  }
  void setImag(int imag) {
    this->imag = imag;
  }
}

int main() {
}