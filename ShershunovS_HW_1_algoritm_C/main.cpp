#include <stdio.h>
#include <math.h>

void solution1();
void solution2();
void solution3();
void solution4();
void solution5();
void solution6();


void menu();

int main() {

    int sel = 0;
    do {
        menu();
        scanf("%i", &sel);
        switch(sel)
        {
            case 1:
                solution1();
                break;
            case 2:
                solution2();
                break;
            case 3:
                solution3();
                break;
            case 4:
                solution4();
                break;
            case 5:
                solution5();
                break;
            case 6:
                solution6();
                break;

            case 0:
                printf("Bye\n");
            default:
                printf("Wrong selected\n");
        }
    } while (sel != 0);

    return 0;
}


void menu(){
    printf("Укажите номер необхдимой задачи\n");
    printf("1 - Задание номер 1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах.\n");
    printf("2 - Задание номер 2. Найти максимальное из четырех чисел. Массивы не использовать.\n");
    printf("3 - Задание номер 3. Написать программу обмена значениями двух целочисленных переменных с использованием третьей переменной. Способ 1.\n");
    printf("4 - Задание номер 3. Написать программу обмена значениями двух целочисленных переменных без использования третьей переменной. Способ 1.\n");
    printf("5 - Задание номер 3. Написать программу обмена значениями двух целочисленных переменных без использования третьей переменной. Способ 2.\n");
    printf("6 - Задание номер 4. Написать программу нахождения корней заданного квадратного уравнения.\n");
}


void solution1() {
   double h, m;

   printf("Введите рост в метрах\n");
   scanf("%lf", &h);

   printf("Введите вес в килограммах\n");
   scanf("%lf", &m);

   printf("Индекс тела %lf \n", (m/(h * h)));
}

void solution2()
{
    double a, b, c, d, max;

    printf("Введите четыре числа через пробел\n");
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    printf("%lf %lf %lf %lf\n", a, b, c, d);
    max = d;
    if (a > max)
        a = max;

    else if (b > max)
        b = max;

    else if (c > max)
        c = max;

    printf("Самое большое число %lf\n", max);
}
void solution3()
{
double a, b, c;
    printf("Введите два числа через пробел \n");
    scanf("%lf %lf", &a, &b);

    c = b;
    b = a;
    a = c;

    printf("Ваши числа %lf %lf\n", a, b);
}
void solution4(){
    double a, b;
    printf("Введите два числа через пробел \n");
    scanf("%lf %lf", &a, &b);

    a = b + a;
    b = a - b;
    a = a - b;

    printf("Ваши числа %lf %lf\n", a, b);
}
void solution5(){
    double a, b;
    printf("Введите два числа через пробел \n");
    scanf("%lf %lf", &a, &b);

    a = a * b;
    b = a / b;
    a = a / b;

    printf("Ваши числа %lf %lf\n", a, b);
}
void solution6()
{
    double a, b, c, d;
    printf("Введите коэффициенты квадратного уравнения a b c, через пробел \n");
    scanf("%lf %lf %lf", &a, &b, &c);

    d = b * b - 4 * a *c;

    if (d > 0)
    printf("Уравнение имеет два корня %lf %lf\n", ( (-b + sqrt(d)) / (2 * a) ),   (-b - sqrt(d)) / (2 * a) );

    else if (d == 0)
    printf("Уравнение имеет один корень %lf\n", ( -b / 2 * a ) );

    else if (d < 0)
   printf("Уравнение не имеет решений в действительных числах\n" );
    else
    printf("Уравнение не является квадратным\n");
}