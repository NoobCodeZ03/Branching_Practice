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

  void setReal(int real) {
    this->real = real;
  }
  void setImag(int imag) {
    this->imag = imag;
  }

  friend Complex operator+ (Complex const &comp1, Complex const &comp2);
  friend Complex operator- (Complex const &comp1, Complex const &comp2);
};


