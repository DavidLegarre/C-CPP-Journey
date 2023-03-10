

int binary_exponentiation(int base, int exponent, int modulo){
    int r = 1;
    while (exponent != 0){
        if (exponent % 2 == 1)
        {
            r = (r * base) % modulo;
        }
        exponent = exponent/2;
        base = base*base % modulo;
    }
    return r;    
}