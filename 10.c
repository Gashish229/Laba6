#include<stdio.h>
int main(void)
{
    int variant;
    float pribyl, nalogi, ogranich;
    while(1)
    {
        printf("\n=================================\n");
        printf("Выберите категорию налогообложения:\n");
        printf("1) Одинокий\n");
        printf("2) Глава семейства\n");
        printf("3) Состоит в браке (совместно)\n");
        printf("4) Состоит в браке (раздельно)\n");
        printf("5) Выход\n");
        printf("=================================\n");
        printf("Ваш выбор: ");
        scanf("%d", &variant);
        if (variant == 5)
        {
            printf("Программа завершена.\n");
            break;
        }
        switch(variant)
        {
            case 1:
                ogranich = 17850.0;
                break;
            case 2:
                ogranich = 23900.0;
                break;
            case 3:
                ogranich = 29750.0;
                break;
            case 4:
                ogranich = 14875.0;
                break;
            default:
                printf("Ошибка! Выберите вариант от 1 до 5.\n");
                continue;
        }
        printf("Введите облагаемый налогом доход: $");
        scanf("%f", &pribyl);
        if (pribyl < 0)
        {
            printf("Ошибка! Доход не может быть отрицательным.\n");
            continue;
        }
        if (pribyl <= ogranich)
        {
            nalogi = pribyl * 0.15;
        }
        else
        {
            nalogi = ogranich * 0.15 + (pribyl - ogranich) * 0.28;
        }
        
        printf("\n--- Результаты расчета ---\n");
        printf("Категория: ");
        switch(variant)
        {
            case 1:
                printf("Одинокий\n");
                break;
            case 2:
                printf("Глава семейства\n");
                break;
            case 3:
                printf("Состоит в браке (совместно)\n");
                break;
            case 4:
                printf("Состоит в браке (раздельно)\n");
                break;
        }
        printf("Облагаемый доход: $%.2f\n", pribyl);
        printf("Сумма налога: $%.2f\n", nalogi);
        printf("Чистый доход: $%.2f\n", pribyl - nalogi);
    }
    return 0;
}
