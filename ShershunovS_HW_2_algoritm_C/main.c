#include <stdio.h>
#include <math.h>



void solution1();
void solution2();
void solution3();
void solution4();

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
    printf("1  - Задание номер 1. Реализовать функцию перевода из десятичной системы в двоичную, используя рекурсию.\n");
    printf("2  - Задание номер 2. Реализовать функцию возведения числа a в степень b: без рекурсии\n");
    printf("3  - Задание номер 2. Реализовать функцию возведения числа a в степень b: рекурсивно\n");
    printf("4  - НЕВЫПОЛНЕНО. Задание номер 2. Реализовать функцию возведения числа a в степень b: *рекурсивно, используя свойство четности степени\n");


}


void dToB(unsigned h) {
    if (h / 2)
        dToB(h / 2);
    printf("%i", h % 2);
}

void solution1() {
    int h;

    printf("Введите десятичное число для перевода его в двоичное\n");
    scanf("%i", &h);
    printf("Число %i в двоичной системе выглядит так: ", h);
    dToB(h);
    printf("\n");
}

int stepen(int n, int s) {
    int i = 0;
int h = n;
    if (n == 0)
        printf("Будет 0\n");
    if (n == 1)
        printf("Будет 1\n");
else if (s < 0) {
    while (i < s)
    {
        h = h / n;
        i = i - 1;
    }}
else if (s > 0) {
        while (i < s)
        {
            h = h * n;
            i = i + 1;
        }}

return h;
}

void solution2() {
    int n, s;

    printf("Введите число для возведения в степень\n");
    scanf("%i", &n);
    printf("Введите степень, в которую надо ввести\n");
    scanf("%i", &s);

    printf("Число %i в степени %i будет %i\n", n, s, stepen(n, s) );
    printf("\n");
}

int stepenR(int n, int s) {
        if(n == 0) return 1;
        if(n < 0) return stepenR ( 1 / s, -n);
        if(n % 2) return s * stepenR (s, n - 1);
        return stepenR(s * s, n / 2);

}

void solution3() {
int n,s;
    printf("Введите число для возведения в степень\n");
    scanf("%i", &n);
    printf("Введите степень, в которую надо ввести\n");
    scanf("%i", &s);
    stepenR(n, s);
    printf("Число %i в степени %i будет %i\n", n, s, stepenR(n, s));
    printf("\n");
}

int stepenRR(int n, int s)
{
    int a = 1;
    while(s) {
        if(n % 2) {
            stepenRR( a * n, s--);
        }
        else{
            stepenRR(n * n, s/2);
        }
    }
    return a;
}

void solution4() {
    int n, s;
    printf("Введите число для возведения в степень\n");
    scanf("%i", &n);
    printf("Введите степень, в которую надо ввести\n");
    scanf("%i", &s);

    printf("Число %i в степени %i будет %i\n", n, s, stepenRR(n, s));
    printf("\n");
}
