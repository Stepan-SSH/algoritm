// Шершунов Степан
#include <stdio.h>

void solution1();
void solution2();
void solution3();
void solution4();
void solution5();

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
    printf("1  - Задание номер 1. Попробовать оптимизировать пузырьковую сортировку. Сравнить количество операций сравнения оптимизированной "
           " не оптимизированной программы. Написать функции сортировки, которые возвращают количество операций.\n"
           "НЕОПТИМИЗИРОЛВАННАЯ СОРТИРОВКА\n");
    printf("2  - Задание номер 1. Попробовать оптимизировать пузырьковую сортировку. Сравнить количество операций сравнения оптимизированной "
           " не оптимизированной программы. Написать функции сортировки, которые возвращают количество операций.\n"
           "ОПТИМИЗИРОВАННАЯ СОРТИРОВКА\n");
    printf("3  - Задание номер 3. Реализовать бинарный алгоритм поиска в виде функции, которой передается отсортированный массив.\n"
           "Функция возвращает индекс найденного элемента или -1, если элемент не найден.\n");
    printf("4  - Задание номер 2*. Реализовать шейкерную сортировку.\n");
    printf("5  - Задание номер 4*. Подсчитать количество операций для каждой из сортировок и сравнить его с асимптотической сложностью алгоритма.\n");
}


//Достаточно решить 3 задачи. Записывайте в начало программы условие и свою фамилию.
// Все решения создавайте в одной программе.
// Задачи со звездочками выполняйте в том случае, если решили базовые.
// Снабдите программу меню.


void swap (int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void print(int size, int *a)
{
int i;
for(i = 0; i < size; i++)
printf("%i\n", a[i]);  // Попробовать поставь 6 перед и
    printf("\n");

}

void solution1() {
    int size;

    int count = 0;
    FILE *in;

    in = fopen("/Users/SSh/algoritm/ShershunovS_HW_3_algoritm_C/a.txt","r");
   fscanf(in, "%i", &size);
    printf("Размер массива %i\n", size);
    int a[size];
    int i;
   for(i = 0; i < size; i++)    {
       fscanf(in, "%i", &a[i]);
       count++;
   }
   fclose(in);

   printf("Массив не отсортирован\n");
   print(size,a);

   int j;

for(i = 0; i < size; i++) {
    count++;
    for (j = 0; j < size - 1; j++) {
        count++;
        if (a[j + 1] < a[j]) {
            swap(&a[j + 1], &a[j]);
            count++;
                       }
        }
    }

    printf("Массив отсортирован\n");
    print(size,a);
    printf("Количество операций %d \n\n", count);
}


void solution2() {
    int size;

    int count = 0;
    FILE *in;

    in = fopen("/Users/SSh/algoritm/ShershunovS_HW_3_algoritm_C/a.txt","r");
    fscanf(in, "%i", &size);
    printf("Размер массива %i\n", size);
    int a[size];
    int i;
    for(i = 0; i < size; i++)    {
        fscanf(in, "%i", &a[i]);
        count++;
    }
    fclose(in);

    printf("Массив не отсортирован\n");
    print(size,a);

    int q = 0;
    int r = 0;
    count = 0;

    for(i = 0; i < size; i++){
        count++;

        for (r = 0; r < size - 1; r++) {
            count++;
            if (a[r + 1] < a[r]) {
                swap(&a[r + 1], &a[r]);
                count++;
                q = a[r + 1];
                while (q > a[r])
                {
                    r++;
                }
            }
        }
    }
    printf("Массив отсортирован\n");
    print(size,a);
    printf("Количество операций %d \n\n", count);
}

void sort(int size, int a[] ){

    int q = 0;
    int r = 0;
    int i = 0;

    for(i = 0; i < size; i++){

        for (r = 0; r < size - 1; r++) {

            if (a[r + 1] < a[r]) {
                swap(&a[r + 1], &a[r]);

                q = a[r + 1];
                while (q > a[r])
                {
                    r++;
                }
            }
        }
    }
    }
  int bSearch(int x, int size, int a[]) {
  int l = 0;
  int r = size - 1;
  int m = l + (r - l)/2;
  int i = 0;

  while (i < size) {
      if (a[m] == x){
          return m;
      }
     if (l <= r && a[m] != x){
          if (a[m] < x) {
              l = m + 1;
              m = l + (r - l)/2;
             }
          else {
              r = m - 1;
              m = l + (r - l)/2;
              }
          i++;
      }
      else {
          return -1;
      }
  }
}


void solution3() {
    int size;
    int x;
    FILE *in;
    in = fopen("/Users/SSh/algoritm/ShershunovS_HW_3_algoritm_C/a.txt","r");
    fscanf(in, "%i", &size);

    int a[size];
    int i;

    for(i = 0; i < size; i++)    {
        fscanf(in, "%i", &a[i]);
    }
    fclose(in);

    sort(size, a);
   // print(size,a);

    printf("ВВедите искомое число\n");
    scanf("%i", &x);

    printf ("Под индексом %d\n", bSearch(x, size, a));

}

void solution4() {
    int size;

    int count = 0;
    FILE *in;

    in = fopen("/Users/SSh/algoritm/ShershunovS_HW_3_algoritm_C/a.txt","r");
    fscanf(in, "%i", &size);
    printf("Размер массива %i\n", size);
    int a[size];
    int i;
    for(i = 0; i < size; i++)    {
        fscanf(in, "%i", &a[i]);
        count++;
    }
    fclose(in);

    printf("Массив не отсортирован\n");
    print(size,a);

    int j;
    int w = size;
    int z = 0;

    for(i = 0; i < size; i++) {
        count++;
        for (j = 0; j < size; j++) {
            count++;


            if (a[j + 1] < a[j] && z % 2 != 0) {
                swap(&a[j + 1], &a[j]);
                count++;
                z++;
              //  printf("Прямая\n");
            }

           if (a[w - j] < a[w - j - 1] && z % 2 == 0) {
                swap(&a[w - j], &a[w - 1 - j]);
                count++;
               z++;
              // printf("Обратная\n");
            }
        }
    }

    printf("Массив отсортирован\n");
    print(size,a);
    printf("Количество операций %d \n\n", count);
}


void solution5() {
}