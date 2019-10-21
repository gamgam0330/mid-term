#include <stdio.h>

void average(double in1, double in2);

int main (void)
{
    double n1, n2;

    scanf("%le %le", &n1, &n2);
    average(n1, n2);
}

void average(double in1, double in2)
{
    double n3 = (in1 + in2)/2;

    printf("%lf", n3);
}
