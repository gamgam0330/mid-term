#include <stdio.h>

int main (void)
{
  int i = 1;
  int *pi = &i;
    for(i = 1; i <= 100; i++){
        for(int j = 1; j <= 10; j++){
            printf("%d ", j*i);
        }
        printf("\n");
    }

}

