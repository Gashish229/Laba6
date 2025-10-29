#include<stdio.h>
int main(void)
{
    int ch; int count = 0;
    printf("Введите текст (# для завершения): \n");
    while ((ch = getchar()) != '#')
    {
        printf("%c-%3d ", ch, ch);
        count++;
        if (count % 8 == 0)
        {
            printf("\n");
        }
    }
    return 0;
}
