#include <stdio.h>
#include <wchar.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, ""); // Устанавливаем локаль для поддержки широких символов
    wint_t ch; 
    int count = 0;
    wprintf(L"Введите текст (# для завершения): \n");
    while ((ch = getwchar()) != L'#')
    {
        wprintf(L"%lc-%3d ", ch, ch);
        count++;
        if (count % 8 == 0)
        {
            wprintf(L"\n");
        }
    }
    return 0;
}
