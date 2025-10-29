#include<stdio.h>
#define osnov 10
#define sverh 1.5
#define perv_300 0.15
#define sled_150 0.2
#define ost 0.25
int main(void)
{
    int kolvo_chasov;
    float nalogi, obsh_sum, chist_zp;
    printf("Введите кол-во отработанных часов в неделю: \n");
    scanf("%d", &kolvo_chasov);
    if (kolvo_chasov > 40)
    {
        obsh_sum = (40 * osnov) + ((kolvo_chasov - 40) * sverh * osnov);
    }
    else
    {
        obsh_sum = kolvo_chasov * osnov;
    }
    printf("Общая сумма начислений = %.2f$", obsh_sum);
    if (obsh_sum <= 300)
    {
        nalogi = perv_300 * obsh_sum;
    }
    else if (obsh_sum <= 450)
    {
        nalogi = 300 * perv_300 + (obsh_sum - 300) * sled_150;
    }
    else
    {
        nalogi = 300 * perv_300 + 150 * sled_150 + (obsh_sum - 450) * ost;
    }
    printf("Общая сумма налога = %.2f$", nalogi);
    chist_zp = obsh_sum - nalogi;
    printf("Размер чистой зарплаты = %.2f$", chist_zp);
    return 0;
}
