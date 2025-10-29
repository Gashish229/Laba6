#include<stdio.h>
int main(void)
{
    int ch;
    int kolvo = 0;
    int tekush = 0;
    printf("Введите текст (# для завершения):\n");
    while((ch = getchar()) != '#')
    {
        if (tekush == 'e' && ch == 'i')
        {
            kolvo++;
        }
        tekush = ch;
    }
    printf("Кол-во последовательностей ei = %d\n", kolvo);
    return 0;
}
