#include <stdio.h>

int main() {

    // char
    signed char sc = 'A';
    unsigned char uc = 66;

    // short
    short s = -32000;
    unsigned short us = 65000;

    // int
    int i = -100000;
    unsigned int ui = 100000;

    // long
    long int l = -1000000;
    unsigned long int ul = 1000000;

    // long long
    long long int ll = -9000000000;
    unsigned long long int ull = 9000000000ULL;

    // flottants
    float f = 3.14f;
    double d = 3.1415926535;
    long double ld = 3.141592653589793L;

    printf("signed char : %c\n", sc);
    printf("unsigned char : %u\n\n", uc);

    printf("short : %hd\n", s);
    printf("unsigned short : %hu\n\n", us);

    printf("int : %d\n", i);
    printf("unsigned int : %u\n\n", ui);

    printf("long int : %ld\n", l);
    printf("unsigned long int : %lu\n\n", ul);

    printf("long long int : %lld\n", ll);
    printf("unsigned long long int : %llu\n\n", ull);

    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}