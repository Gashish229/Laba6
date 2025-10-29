#include<stdio.h>
int main(void)
{
    int number, prostoe;
    printf("Введите целое положительное число: \n");
    scanf("%d", &number);
    if (number <= 0)
    {
        printf("Число должно быть положительным\n");
    }
    printf("Простые числа до %d: ", number);
    for (int i = 2; i <= number; i++)
    {
        prostoe = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                prostoe = 0;
                break;
            }
        }
        if (prostoe == 1)
        {
            printf("%d", i);
        }
    }
    printf("\n");
    return 0;
}
