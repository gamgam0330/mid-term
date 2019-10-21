#include <stdio.h>

void Swap(int *pa, int *pb);

int main (void)
{
    int a = 10, b = 20;
    printf("%d  %d  \n", a, b);
    Swap(&a, &b);

    printf("%d  %d  \n", a, b);
}

void Swap(int *pa, int *pb)
{
    int temp;
    temp = *pa;
    *pa = *pb;
    *pb = temp;
}
