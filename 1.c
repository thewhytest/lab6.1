#define  _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL, "RUS");

    int years;

    printf("Введите год: ");
    scanf("%d", &years);

    if ((years % 4 == 0 && years % 100 != 0) || (years % 400 == 0))
        printf("год %d високосный\n", years);
    else
        printf("год %d не високосный\n", years);

    system("pause");
}
