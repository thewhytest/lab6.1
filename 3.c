#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");

    double x, y;
    int q;

    printf("Введите x и y (x != 0, y != 0): ");
    scanf("%lf %lf", &x, &y);

    if (x == 0 || y == 0)
    {
        printf("Ошибка: x и y должны быть отличны от нуля\n");
        return 1;
    }

    if (x > 0 && y > 0)
        q = 1;
    else if (x < 0 && y > 0)
        q = 2;
    else if (x < 0 && y < 0)
        q = 3;
    else
        q = 4;

    printf("Точка (%g, %g) принадлежит %d четверти\n", x, y, q);

    return 0;
    system("pause");
}
