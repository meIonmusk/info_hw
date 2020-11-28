#include <stdio.h>

long long gcd(long long a, long long b)
{
    (a < 0) ? (a = -a) : (a = a);
    (b < 0) ? (b = -b) : (b = b);
    return b ? gcd(b, a % b) : a;
}

long long lcm(long long a, long long b)
{
    return gcd(a, b) ? (a * b / gcd(a, b)) : 0;
}