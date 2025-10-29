#include<stdio.h>
#define tar_1 8.75
#define tar_2 9.33
#define tar_3 10.00
#define tar_4 11.20
#define sverh 1.5
#define perv_300 0.15
#define sled_150 0.2
#define ost 0.25
int main(void)
{
    int kolvo_ch, variant;
    float rate, nalogi, obsh_sum, chist_zp;
    while(1) {
        printf("*************************************\n");
        printf("Выберите тарифную ставку:\n");
        printf("1) $8.75/ч\n");
        printf("2) $9.33/ч\n");
        printf("3) $10.00/ч\n");
        printf("4) $11.20/ч\n");
        printf("5) Выход\n");
        printf("*************************************\n");
        printf("Ваш выбор: ");
        scanf("%d", &variant);
        if (variant == 5) 
        {
            break;
        }
        switch(variant) 
        {
            case 1: rate = tar_1; break;
            case 2: rate = tar_2; break;
            case 3: rate = tar_3; break;
            case 4: rate = tar_4; break;
            default: 
                printf("Ошибка! Введите число от 1 до 5\n\n");
                continue;
        }
        printf("Введите кол-во отработанных часов: ");
        scanf("%d", &kolvo_ch);
        if (kolvo_ch > 40) 
        {
            obsh_sum = (40 * rate) + ((kolvo_ch - 40) * sverh * rate);
        } else 
        {
            obsh_sum = kolvo_ch * rate;
        }
        if (obsh_sum <= 300) 
        {
            nalogi = perv_300 * obsh_sum;
        } else if (obsh_sum <= 450) 
        {
            nalogi = 300 * perv_300 + (obsh_sum - 300) * sled_150;
        } else 
        {
            nalogi = 300 * perv_300 + 150 * sled_150 + (obsh_sum - 450) * ost;
        }
        chist_zp = obsh_sum - nalogi;
        printf("\nРезультаты расчета:\n");
        printf("Общая сумма начислений = %.2f$\n", obsh_sum);
        printf("Сумма налога = %.2f$\n", nalogi);
        printf("Чистая зарплата = %.2f$\n\n", chist_zp);
    }
    printf("Программа завершена.\n");
    return 0;
}
