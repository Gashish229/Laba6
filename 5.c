#include<stdio.h>
#include<string.h>
int main(void)
{
    int kolvo_zamen = 0;
    int ch;
    printf("Введите текст (# для завершения):\n");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
            case '.':
                putchar('!');
                kolvo_zamen++;
                break;
            case '!':
                putchar('!');
                putchar('!');
                kolvo_zamen++;
                break;
            default:
                putchar(ch);
                break;
        }
    }
    printf("Кол-во замен = %d", kolvo_zamen);
    return 0;
}
