#include <stdio.h>
#include <locale.h>

int main(void) {
   
    setlocale(LC_CTYPE, "RUS");

    int m;

    printf("Введите возраст ребенка в месяцах: ");
    if (scanf("%d", &m) != 1) {
        printf("Ошибка: введено некорректное значение.\n");
        return 1;
    }

  
    if (m < 0 || m > 204) {
        printf("Возраст вне допустимого диапазона (0-204 мес. / до 17 лет).\n");
    }
    else if (m <= 2) {
        printf("Категория: Новорожденный\n");
    }
    else if (m <= 12) {
        printf("Категория: Младенец\n");
    }
    else if (m <= 36) {
        printf("Категория: Раннее детство\n");
    }
    else if (m <= 84) {
        printf("Категория: Дошкольник\n");
    }
    else if (m <= 156) {
        printf("Категория: Школьник\n");
    }
    else {
        printf("Категория: Подросток\n");
    }

    return 0;
}
