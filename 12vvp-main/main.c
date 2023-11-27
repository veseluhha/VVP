#include <stdio.h>
int main(void) {
    int d;
    printf("day:");
    scanf("%i", &d);
    int m;
    printf("mouth:");
    scanf("%i", &m);
    switch (d) {
    case 1:
        printf("Первое ") ;
        break;
    case 2:
        printf("Второе ") ;
        break;
    case 3:
        printf("Третье ") ;
        break;
    case 4:
        printf("Четвертое ") ;
        break;
    case 5:
        printf("Пятое ") ;
        break;
    case 6:
        printf("Шестое ") ;
        break;
    case 7:
        printf("Седьмое ") ;
        break;
    case 8:
        printf("Восьмое ") ;
        break;
    case 9:
        printf("Девятое ") ;
        break;
    case 10:
        printf("Десятое ") ;
        break;
    case 11:
        printf("Одиннадцатое ") ;
        break;
    case 12:
        printf("Двенадцатое ") ;
        break;
    case 13:
        printf("Тринадцатое ") ;
        break;
    case 14:
        printf("Четырнадцатое ") ;
        break;
    case 15:
        printf("Пятнадцатое ") ;
        break;
    case 16:
        printf("Шестнадцатое ") ;
        break;
    case 17:
        printf("Семнадцатое ") ;
        break;
    case 18:
        printf("Восемнадцатое ") ;
        break;
    case 19:
        printf("Девятнадцатое ") ;
        break;
    case 20:
        printf("Двадцатое ") ;
        break;
    case 21:
        printf("Двадцать первое ") ;
        break;
    case 22:
        printf("Двадцать второе ") ;
        break;
    case 23:
        printf("Двадцать третье ") ;
        break;
    case 24:
        printf("Двадцать четвертое") ;
        break;
    case 25:
        printf("Двадцать пятое ") ;
        break;
    case 26:
        printf("Двадцать шестое ") ;
        break;
    case 27:
        printf("Двадцать седьмое ") ;
        break;
    case 28:
        printf("Двадцать восьмое ") ;
        break;
    case 29:
        printf("Двадцать девятое ") ;
        break;
    case 30:
        printf("Тридцатое ") ;
        break;
    case 31:
        printf("Тридцать первое ") ;
        break;
    }
    switch (m) {
    case 1:
        printf("января\n") ;
        break;
    case 2:
        printf("февраля\n") ;
        break;
    case 3:
        printf("марта\n") ;
        break;
    case 4:
        printf("апреля\n") ;
        break;
    case 5:
        printf("мая\n") ;
        break;
    case 6:
        printf("июня\n") ;
        break;
    case 7:
        printf("июля\n") ;
        break;
    case 8:
        printf("августа\n") ;
        break;
    case 9:
        printf("сентября\n") ;
        break;
    case 10:
        printf("октября\n") ;
        break;
    case 11:
        printf("ноября\n") ;
        break;
    case 12:
        printf("декабря\n") ;
        break;
    }
    return 0;
}

////2
//#include <stdio.h>
//int main(void)
//{
//   int n;
//   char c;
//   printf("Направление:") ;
//   scanf ("%c", &c);
//   printf("Команда:") ;
//   scanf ("%i", &n);
//
//   switch (c) {
//   case 'C':
//       switch (n) {
//       case 1:
//            c='Z';
//            break;
//       case 0:
//            c='C';
//            break;
//       case -1:
//            c='B';
//            break;
//       }
//       break;
//   case 'B':
//       switch (n) {
//       case 1:
//            c='C';
//            break;
//       case 0:
//            c='B';
//            break;
//       case -1:
//            c='Y';
//            break;
//       }
//   case 'Y':
//       switch (n) {
//       case 1:
//            c='B';
//            break;
//       case 0:
//            c='Y';
//            break;
//       case -1:
//            c='Z';
//            break;
//       }
//       break;
//   case 'Z':
//       switch (n) {
//       case 1:
//            c='Y';
//            break;
//       case 0:
//            c='Z';
//            break;
//       case -1:
//            c='C';
//            break;
//       }
//   }
//   printf("%c\n",c);
//   return 0;
//}

////3
//#include <stdio.h>
//int main(void){
//   int n;
//   printf("Введите количество: ") ;
//   scanf ("%i", &n);
//   if (n/10 == 1)
//        switch (n) {
//        case 10:
//                printf("десять учебных заданий \n");
//                break;
//            case 11:
//                printf("одинадцать учебных заданий\n");
//                break;
//        case 12:
//                printf("двенадцать учебных заданий\n");
//                break;
//        case 13:
//                printf("тринадцать учебных заданий\n");
//                break;
//        case 14:
//                printf("четырнадцать учебных заданий\n");
//                break;
//        case 15:
//                printf("пятнадцать учебных заданий\n");
//                break;
//        case 16:
//                printf("шестнадцать учебных заданий\n");
//                break;
//        case 17:
//                printf("семнадцать учебных заданий\n");
//                break;
//        case 18:
//                printf("восемнадцать учебных заданий\n");
//                break;
//        case 19:
//                printf("девятнадцать учебных заданий\n");
//                break;
//        }
//    else {
//        switch (n/10) {
//            case 2:
//                printf("двадцать ");
//                break;
//            case 3:
//                printf("тридцать ");
//                break;
//            case 4:
//                printf("сорок ");
//                break;
//        }
//        switch (n%10) {
//        case 1:
//            printf("одно ");
//            break;
//        case 2:
//            printf("два ");
//            break;
//        case 3:
//            printf("три ");
//            break;
//        case 4:
//            printf("четыре ");
//            break;
//        case 5:
//            printf("пять ");
//            break;
//        case 6:
//            printf("шесть ");
//            break;
//        case 7:
//            printf("семь ");
//            break;
//        case 8:
//            printf("восемь ");
//            break;
//        case 9:
//            printf("девять ");
//            break;
//        }
//        switch (n%10) {
//        case 0:
//        case 5:
//        case 6:
//        case 7:
//        case 8:
//        case 9:
//            printf("учебных заданий\n");
//            break;
//        case 1:
//            printf("учебное задание\n");
//            break;
//        case 2:
//        case 3:
//        case 4:
//            printf("учебных заданий\n");
//            break;
//        }
//  }
//   return 0;
//}

////4
//#include <stdio.h>
//int main(void){
////   system("chcp 1251");
//   int n;
//   printf("Число: ") ;
//   scanf ("%i", &n);
//   switch (n/100) {
//   case 1:
//       printf("сто ");
//       break;
//   case 2:
//       printf("двести ");
//       break;
//   case 3:
//       printf("триста ");
//       break;
//   case 4:
//       printf("четыреста ");
//       break;
//   case 5:
//       printf("пятьсот ");
//       break;
//   case 6:
//       printf("шестьсот ");
//       break;
//   case 7:
//       printf("семьсот ");
//       break;
//   case 8:
//       printf("восемьсот  ");
//       break;
//   case 9:
//       printf("девятьсот  ");
//       break;
//   }
//   if ((n % 100) / 10 == 1)
//        switch (n % 100) {
//        case 10:
//                printf("десять\n");
//                break;
//            case 11:
//                printf("одинадцать\n");
//                break;
//        case 12:
//                printf("двенадцать\n");
//                break;
//        case 13:
//                printf("тринадцать\n");
//                break;
//        case 14:
//                printf("четырнадцать\n");
//                break;
//        case 15:
//                printf("пятнадцать\n");
//                break;
//        case 16:
//                printf("шестнадцать\n");
//                break;
//        case 17:
//                printf("семнадцать\n");
//                break;
//        case 18:
//                printf("восемнадцать\n");
//                break;
//        case 19:
//                printf("девятнадцать\n");
//                break;
//        }
//    else {
//        switch ((n % 100) / 10) {
//            case 2:
//                printf("двадцать ");
//                break;
//            case 3:
//                printf("тридцать ");
//                break;
//            case 4:
//                printf("сорок ");
//                break;
//            case 5:
//                printf("пятьдесят ");
//                break;
//            case 6:
//                printf("шестьдесят ");
//                break;
//            case 7:
//                printf("семьдесят ");
//                break;
//            case 8:
//                printf("восемьдесят ");
//                break;
//            case 9:
//                printf("девяносто ");
//                break;
//        }
//        switch (n%10) {
//        case 1:
//            printf("один\n");
//            break;
//        case 2:
//            printf("два\n");
//            break;
//        case 3:
//            printf("три\n");
//            break;
//        case 4:
//            printf("четыре\n");
//            break;
//        case 5:
//            printf("пять\n");
//            break;
//        case 6:
//            printf("шесть\n");
//            break;
//        case 7:
//            printf("семь\n");
//            break;
//        case 8:
//            printf("восемь\n");
//            break;
//        case 9:
//            printf("девять\n");
//            break;
//        }
//  }
//   return 0;
//}

////5
//#include <stdio.h>
//int main(void){
////   system("chcp 1251");
//   int n;
//   printf("Год: ") ;
//   scanf ("%i", &n);
//   printf("год ");
//   switch ((n)%10) {
//   case 0:
//   case 1:
//       printf("бел");
//       break;
//   case 2:
//   case 3:
//       printf("черн");
//       break;
//   case 4:
//   case 5:
//       printf("зелён");
//       break;
//   case 6:
//   case 7:
//       printf("красн");
//       break;
//   case 8:
//   case 9:
//       printf("жёлт");
//       break;
//   }
//
//   switch ((n+1)%5) {
//   case 0:
//   case 1:
//   case 2:
//   case 3:
//   case 4:
//   case 5:
//   case 9:
//   case 10:
//   case 11:
//       printf("ой ");
//       break;
//   case 6:
//   case 7:
//   case 8:
//       printf("ого ");
//       break;
//   }
//   switch ((n + 8) % 12) {
//   case 0:
//       printf("крысы\n");
//       break;
//   case 1:
//       printf("коровы\n");
//       break;
//   case 2:
//       printf("тигра\n");
//       break;
//   case 3:
//       printf("зайца\n");
//       break;
//   case 4:
//       printf("дракона\n");
//       break;
//   case 5:
//       printf("змеи\n");
//       break;
//   case 6:
//       printf("лошади\n");
//       break;
//   case 7:
//       printf("овцы\n");
//       break;
//   case 8:
//       printf("обезьяны\n");
//       break;
//   case 9:
//       printf("курицы\n");
//       break;
//   case 10:
//       printf("собаки\n");
//       break;
//   case 11:
//       printf("свиньи\n");
//       break;
//   }
//   return 0;
//}
