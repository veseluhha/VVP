////1
//#include <stdio.h>
//int main(){
//   int a, b;
//   printf("Введите A: ");
//   scanf ("%d", &a);
//   printf("Введите B: ");
//   scanf ("%d", &b);
//   if (a != b)
//       a = b = (a > b) ? a : b;
//   else a = b = 0;
//   printf("Переменная А равна = %d\n Переменная b равна = %d\n", a, b);
//    return 0;
//}

////2
//#include <stdio.h>
//int main(){
//   float a, b, c, sum;
//   printf("Введите первое число: ");
//   scanf ("%f", &a);
//   printf("Введите второе число: ");
//   scanf ("%f", &b);
//   printf("Введите третье число: ");
//   scanf ("%f", &c);
//   if ((a>=b) & (a >= c)){
//        if (b >= c){
//            printf("%f\n",a + b);
//        } else printf("%f\n",a + c);
//    } else if ((b >= a) & (b >= c))
//        if (a >= c){
//            printf("%f\n",a + b);
//        } else printf("%f\n",b + c);
//    else
//        if (a>=b){
//            printf("%f\n",a + c);
//        } else printf("%f\n",b + c);
//   return 0;
//}

////3
//#include <stdio.h>
//#include <stdlib.h>
//int main(){
//   float a, b, c, rast;
//   printf("Введите A: ");
//   scanf ("%f", &a);
//   printf("Введите B: ");
//   scanf ("%f", &b);
//   printf("Введите C: ");
//   scanf ("%f", &c);
//    if (abs(a - b) < abs(a - c)){
//       rast = abs(a-b);
//       printf("B, %f\n", rast);
//    }else printf("C, %f\n", c-a);
//   return 0;
//}

////4
//#include <stdio.h>
//int main(){
//   float x, y;
//   printf("Введите координату x: ");
//   scanf ("%f", &x);
//   printf("Введите координату y: ");
//   scanf ("%f", &y);
//   if ((x > 0) & (y > 0)) printf("I четверть\n");
//   else if ((x < 0) & (y > 0)) printf("II четверть\n");
//   else if ((x < 0) & (y < 0)) printf("III четверть\n");
//   else printf("IV четверть\n");
//   return 0;
//}

////5
//#include <stdio.h>
//int main(){
//   int a;
//   printf("Введите число: ") ;
//   scanf ("%i", &a);
//   if (a == 0) printf("Нулевое " );
//   else {
//       if (a > 0) printf("Положительное ");
//       else printf("Отрицательное ");
//       if ((a % 2) == 0) printf("чётное ");
//       else printf("нечётное ");
//   }
//   printf("число\n");
//
//   return 0;
//}

//6
#include <stdio.h>
int main(){
   int a;
   printf("Введите число: ") ;
   scanf ("%i", &a);
   if ((a % 2) == 0) printf("Чётное ");
   else printf("Нечётное ");
   if (a > 99) printf("трёхзначное ");
   else if ((99 >= a) & (a > 9)) printf("двухзначное ");
   else if (a <= 9)  printf("однозначное ");
   printf("число\n");
   return 0;
}
