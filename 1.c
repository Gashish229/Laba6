#include<stdio.h>
int main(void)
{
    char ch;
    int probel, enter, ostalnie;
    probel = 0; enter = 0; ostalnie = 0;
    while((ch = getchar()) != '#')
    {
        if (ch == ' ')
        {
            probel++;
        }
        if (ch == '\n')
        {
            enter++;
        }
        if (ch != ' ' && ch != '\n')
        {
            ostalnie++;
        }
    }
    printf("кол-во пробелов = %d\n", probel);
    printf("кол-во новых строк = %d\n", enter);
    printf("ко-во остальных символов = %d\n", ostalnie);
    return 0;
}
