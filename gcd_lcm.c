#include <stdio.h>

long long gcd(long long a, long long b)
{
    a = (a < 0) ? -a : a;
    b = (b < 0) ? -b : b;
    return b ? gcd(b, a % b) : a;
}

long long lcm(long long a, long long b)
{
    return gcd(a, b) ? (a * b / gcd(a, b)) : 0;
}