// Binary Exponentiation
//  b^(13) = b^(1101) = b^(8) * b^(4) * b^(1)

long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

// Effective computation of large exponents modulo a number
//  b^(13) % m = b^(1101) % m = (b^(8) % m * b^(4) % m * b^(1) % m)%m
long long binpow(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
