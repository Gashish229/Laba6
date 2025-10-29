#include<stdio.h>
#include<string.h>
int main(void)
{
    int kolvo_zamen = 0;
    int ch;
    printf("Введите текст (# для завершения):\n");
    while ((ch = getchar()) != '#')
    {
        if (ch == '.')
        {
            putchar('!');
            kolvo_zamen++;
        }
        else if (ch == '!')
        {
            putchar('!');
            putchar('!');
            kolvo_zamen++;
        }
        else
        {
            putchar(ch);
        }
    }
    printf("Кол-во замен = %d", kolvo_zamen);
    return 0;
}
