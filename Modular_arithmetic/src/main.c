#include <stdio.h>

int main(int argc, char const *argv[])
{
    int base = 2;
    int exp = 15;
    int mod = 23;

    int result;

    result = binary_exponentiation(base, exp, mod);

    printf("%d^%d modulo %d = %d", base, exp, mod, result);

    return 0;
}
