#include<stdio.h>
int main(void)
{
    int num;
    int kolvo_cel = 0, sum_cel = 0;
    int kolvo_nechet = 0, sum_nechet = 0;
    while (scanf("%d", &num) == 1 && num != 0)
    {
        if (num % 2 == 0)
        {
            kolvo_cel++;
            sum_cel += num; 
        }
        else if (num % 2 != 0)
        {
            kolvo_nechet++;
            sum_nechet += num;
        }
    }
    printf("Кол-во целых четных чисел = %d\n", kolvo_cel);
    if (kolvo_cel > 0)
    {
        double sred_cel = (double)sum_cel / kolvo_cel;
        printf("Среднее значение четных целых чисел = %.2f\n", sred_cel);
    }
    else
    {
       printf("Среднее значение четных целых чисел = 0\n");
    }
    printf("Кол-во целых нечетных чисел = %d\n", kolvo_nechet);
    if (kolvo_nechet > 0)
    {
        double sred_nechet = (double)sum_nechet / kolvo_nechet;
        printf("Среднее значение нечетных целых чисел = %.2f", sred_nechet);
    }
    else
    {
        printf("Среднее значение нечетных целых чисел = 0\n");
    }
    return 0;
}
