#include <iostream>

long Factorial(int no);

long nCr(int n, int r);

int main() {
  
 int n, r;
  
 std::cout << "Enter a value for n ";
 std::cin >> n;
  
 std::cout << "Enter a value for r ";
 std::cin >> r;
  
 std::cout << "nCr = ";
  
 std::cout << nCr(n,r);
  
 std::cout << std::endl;

  return 0;
}

long Factorial(int no)
{
  int fac, i;

  fac = 1;

  for (i = no; i >= 1; i--)
  {
    fac = fac * i;
  }

  return fac;
}

long nCr(int n, int r)
{
  int N, R, NR,  nCr, i;

  N = Factorial(n);
  
  R = 1;

  for (i = r; i >= 1; i--)
  {
    R = R * i;
  }

  NR = 1;

  for (i = (n-r); i >= 1; i--)
  {
    NR = NR * i;
  }

  nCr = N / R * NR;

  return nCr;
}