#include<stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    float d, e;
    char cl, c2;
    double f, g;
    long m, n;
    unsigned int p, q; 
    a = 61;
    b = 62;
    cl = 'a';
    c2 = 'b';
    d = 3.56;
    e = -6.87;
    f = 3157.890121;
    g = 0.123456789;
    m = 50000;
    n = -60000;
    p = 32768;
    q = 40000;
    printf("a=%d,b=%d\ncl=%c,c2=%c\nd=%6.2f,e=%6.2f\n", a, b, cl, c2, d, e);
    printf("f=%15.6f,g=%15.12f\nm=%ld,n=%ld\np=%u,q=%u\n", f, g, m, n, p, q);
    system("pause");
    return 0;
}
