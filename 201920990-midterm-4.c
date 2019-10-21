#include <stdio.h>

int main(void)
{
    int i, num, j = 1;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++)
      j = j * i;

    printf("The facrorial of %d is %d\n", num, j);
}
