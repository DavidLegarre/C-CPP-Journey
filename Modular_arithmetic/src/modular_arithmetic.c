#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int countBits(int number)
{      
      // log function in base 2 
      // take only integer part
      return (int)log2(number)+1;
}

int binary_exponentiation(int base, int exponent, int modulo)
{
    int r = 1;
    while (exponent != 0)
    {
        if (exponent % 2 == 1)
        {
            r = (r * base) % modulo;
        }
        exponent = exponent / 2;
        base = base * base % modulo;
    }
    return r;
}

int *convert_binary(int n, int n_bits)
{
    assert(n_bits);
    int *bin = malloc(n_bits);

    if (!bin)
        return NULL;

    for (int i = 0; n > 0; i++)
    {
        bin[i] = n % 2;
        n = n / 2;
    }

    // Reverse binary representation
    int temp;

    for (int i = 0; i < n_bits/2; i++)
    {
        temp = bin[i];
        bin[i] = bin[n_bits-1-i];
        bin[n_bits-1-i] = temp;
    }
    

    return bin;
}

void print_arr(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
    }
}

int binary_exp_steps(int base, int exponent, int modulo)
{
    int n_bits = countBits(exponent);
    printf("%d\n", n_bits);
    int *exp_bin = convert_binary(exponent, n_bits);
    int ci1;
    int ci0 = 1;

    print_arr(exp_bin, n_bits);
    printf("\n");

    for (int i = 0; i < n_bits; i++)
    {
        int step = exp_bin[i];
        int base_pow = (int) pow(base, step);
        ci1 = (ci0*ci0*base_pow) % modulo;
        printf("%d | %d^2 · %d^%d = %d mod %d\n",
               step, ci0, base, step, ci1, modulo);
        ci0 = ci1 % modulo;
    }

    free(exp_bin);

    return ci1;
}