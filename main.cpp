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
  int getImag() {
    return imag;
  }
}

int main() {
}