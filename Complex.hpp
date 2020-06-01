#include <ostream>

class Complex
{
private:
  double real, imag;
public:
  Complex(double real, double imag);

  double getReal();
  double getImag();

  void setReal(double real);
  void setImag(double imag);

  friend Complex operator+ (Complex const &comp1, Complex const &comp2);
  friend Complex operator- (Complex const &comp1, Complex const &comp2);
  friend std::ostream& operator<< (std::ostream &os, Complex const &comp);
};