#define  _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    double x; 

  
    printf("Введите x: ");
    scanf("%lf", &x);

    printf("F(%g) = %g\n", x, x >= 8 ? -x * x + x - 9 : 1 / (x * x * x * x - 6));

    system("pause");
}
