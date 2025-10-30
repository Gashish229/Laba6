#include <stdio.h>
int main(void) 
{
    char variant;
    float artishoki = 0, svekla = 0, morkov = 0;
    float artishoki_price = 2.05, svekla_price = 1.15, morkov_price = 1.09;
    float weight, total_weight, total_cost, discount = 0, shipping, final_cost; 
    printf("Добро пожаловать в ABC Mail Order Grocery!\n");
    while (1) 
    {
        printf("\n=================================\n");
        printf("Выберите действие:\n");
        printf("a) Добавить артишоки (%.2f$/фунт)\n", artishoki_price);
        printf("b) Добавить свеклу (%.2f$/фунт)\n", svekla_price);
        printf("c) Добавить морковь (%.2f$/фунт)\n", morkov_price);
        printf("q) Завершить заказ\n");
        printf("=================================\n");
        printf("Текущий заказ: артишоки: %.1f фунт, свекла: %.1f фунт, морковь: %.1f фунт\n", 
               artishoki, svekla, morkov);
        printf("Ваш выбор: ");
        scanf(" %c", &variant);
        
        if (variant == 'q') 
        {
            break;
        }
        
        switch (variant) 
        {
            case 'a':
                printf("Введите вес артишоков в фунтах: ");
                scanf("%f", &weight);
                artishoki += weight;
                printf("Добавлено %.1f фунт артишоков. Всего: %.1f фунт\n", weight, artishoki);
                break;
            case 'b':
                printf("Введите вес свеклы в фунтах: ");
                scanf("%f", &weight);
                svekla += weight;
                printf("Добавлено %.1f фунт свеклы. Всего: %.1f фунт\n", weight, svekla);
                break;
            case 'c':
                printf("Введите вес моркови в фунтах: ");
                scanf("%f", &weight);
                morkov += weight;
                printf("Добавлено %.1f фунт моркови. Всего: %.1f фунт\n", weight, morkov);
                break;
            default:
                printf("Неверный выбор! Используйте a, b, c или q.\n");
        }
    }
    total_weight = artishoki + svekla + morkov;
    total_cost = artishoki * artishoki_price + svekla * svekla_price + morkov * morkov_price;
    if (total_cost >= 100) 
    {
        discount = total_cost * 0.05;
    }
    
    // доставка
    if (total_weight <= 5) 
    {
        shipping = 6.50;
    } else if (total_weight <= 20) 
    {
        shipping = 14.00;
    } else 
    {
        shipping = 14.00 + (total_weight - 20) * 0.50;
    }
    final_cost = total_cost - discount + shipping;
    printf("\n--- ДЕТАЛИ ЗАКАЗА ---\n");
    printf("Артишоки: %.2f$/фунт, %.1f фунт, $%.2f\n", 
           artishoki_price, artishoki, artishoki * artishoki_price);
    printf("Свекла:   %.2f$/фунт, %.1f фунт, $%.2f\n", 
           svekla_price, svekla, svekla * svekla_price);
    printf("Морковь:  %.2f$/фунт, %.1f фунт, $%.2f\n", 
           morkov_price, morkov, morkov * morkov_price);
    printf("-----------------------------------\n");
    printf("Общая стоимость товаров: $%.2f\n", total_cost);
    if (discount > 0) 
    {
        printf("Скидка 5%%: -$%.2f\n", discount);
    } else 
    {
        printf("Скидка: $0.00\n");
    }
    printf("Доставка: $%.2f\n", shipping);
    printf("ИТОГО К ОПЛАТЕ: $%.2f\n", final_cost);
    printf("Общий вес: %.1f фунт\n", total_weight);
    return 0;
}
