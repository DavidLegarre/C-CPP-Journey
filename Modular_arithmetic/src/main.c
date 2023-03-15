#include <stdio.h>
#include <stdlib.h>
#include "modular_arithmetic.h"

int main()
{
  char cont;
  int running = 1;
  while (running)
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
    printf("Run again? Y/N\n");
    scanf("%s", &cont);
    if (cont == 'y' || cont == 'Y')
    {
      running = 1;
    }
    else
    {
      running = 0;
    }
  }
  return 0;
}
