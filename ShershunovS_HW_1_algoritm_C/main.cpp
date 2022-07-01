#include <stdio.h>
#include <math.h>

void solution1();
void solution2();
void solution3();
void solution4();
void solution5();
void solution6();
void solution7();
void solution8();
void solution9();
void solution10();

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
            case 7:
                solution7();
                break;
            case 8:
                solution8();
                break;
            case 9:
                solution9();
                break;
            case 10:
                solution10();
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
    printf("1  - Задание номер 1. Ввести вес и рост человека. Рассчитать и вывести индекс массы тела по формуле I=m/(h*h); где m-масса тела в килограммах, h - рост в метрах.\n");
    printf("2  - Задание номер 2. Найти максимальное из четырех чисел. Массивы не использовать.\n");
    printf("3  - Задание номер 3. Написать программу обмена значениями двух целочисленных переменных с использованием третьей переменной. Способ 1.\n");
    printf("4  - Задание номер 3. Написать программу обмена значениями двух целочисленных переменных без использования третьей переменной. Способ 1.\n");
    printf("5  - Задание номер 3. Написать программу обмена значениями двух целочисленных переменных без использования третьей переменной. Способ 2.\n");
    printf("6  - Задание номер 4. Написать программу нахождения корней заданного квадратного уравнения.\n");
    printf("7  - Задание номер 5. С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.\n");
    printf("8  - Задание номер 6. Ввести возраст человека (от 1 до 150 лет) и вывести его вместе с последующим словом «год», «года» или «лет».\n");
    printf("9  - Задание номер 7. С клавиатуры вводятся числовые координаты двух полей шахматной доски (x1,y1,x2,y2). Требуется определить, относятся ли к поля к одному цвету или нет.\n");
    printf("10 - Задание номер 8. Ввести a и b и вывести квадраты и кубы чисел от a до b.\n");
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

void solution7()
{
// С клавиатуры вводится номер месяца. Требуется определить, к какому времени года он относится.

int a;
    printf("Введите номер месяца\n");
    scanf("%i", &a);

    if (a > 12 || a < 1)
        printf("Неверно введен номер месяца\n");
    else if (a > 2 && a < 6 )
        printf("Это весна\n");
    else if ( a > 5 && a < 9)
        printf("Это лето\n");
    else if ( a > 8 && a < 12)
        printf("Это осень\n");
    else if ( a == 12 || a > 0 && a < 3 )
        printf("Это зима\n");
}
void solution8()
{
// Ввести возраст человека (от 1 до 150 лет) и вывести его вместе с последующим словом «год», «года» или «лет».
int a;
    printf("Введите возраст\n");
    scanf("%i", &a);
    if ( 1 > a || a > 150 )
        printf("Неверно введен возраст\n");
    else if (a == 1)
        printf("%i год\n", a);
    else if (a > 1 && a < 5)
        printf("%i года\n", a);
    else if (a > 4)
        printf("%i лет\n", a);
}
void solution9()
{
// С клавиатуры вводятся числовые координаты двух полей шахматной доски (x1,y1,x2,y2). Требуется определить, относятся ли к поля к одному цвету или нет.

}
void solution10()
{
int  a, b, c;
    int i = 1;
    printf("Введите числа\n");
    scanf("%i %i", &a, &b );

    printf("Квадраты:\n");
    for ( i = a; c < b; i++)
    {
                c = i * i;
                if (c > b)
                    break;
                else
        printf("%i\n", c);

    }
    printf("Кубы:\n");
    c = 0;
    for ( i = a; c < b; i++)
    {
        c = i * i * i;
        if (c > b)
            break;
        else
       printf("%i\n", c);
    }
}