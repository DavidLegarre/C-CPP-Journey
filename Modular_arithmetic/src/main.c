#include <stdio.h>
#include <stdlib.h>
#include "modular_arithmetic.h"

int main()
{
  int base;
  int exp;
  int mod;

  printf("Base: ");
  scanf("%d", &base);

  printf("Exponent: ");
  scanf("%d", &exp);

  printf("Modulo: ");
  scanf("%d", &mod);

  int result;

  printf("base %d, exponent %d, modulo %d\n", base, exp, mod);

  // result = binary_exponentiation(base, exp, mod);
  result = binary_exp_steps(base, exp, mod);

  printf("%d^%d = %d mod %d\n", base, exp, result, mod);

  return 0;
}
