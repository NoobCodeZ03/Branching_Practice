#include <ostream>

class Complex
{
private:
  int real, imag;
public:
  Complex(int real, int imag);

  int getReal();
  int getImag();

  void setReal(int real);
  void setImag(int imag);

  friend Complex operator+ (Complex const &comp1, Complex const &comp2);
  friend Complex operator- (Complex const &comp1, Complex const &comp2);
  friend std::ostream& operator<< (std::ostream &os, Complex const &comp);
};