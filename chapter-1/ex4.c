#include <stdio.h>
/* печать таблицы температур по Фаренгейту
и Цельсию для fahr = 0, 20, ..., 300 */
main() {
    float fahr, celsius;
    int lower, upper, step;
    lower = 0; /* нижняя граница таблицы температур */
    upper = 300; /* верхняя граница */
    step = 20; /* шаг */
    fahr = lower;
    printf ("Таблица температур по Цельсию\n\n");
    while (celsius <= upper) {
        fahr = celsius / (5.0/9.0) + 32;
        printf ("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    } 
}
