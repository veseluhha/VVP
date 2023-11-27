////1
//#include <stdio.h>
//int main(void){
//   int A, B;
//   printf("Введите A:");
//   scanf ("%i", &A);
//   printf("Введите B:");
//   scanf ("%i", &B);
//   printf("%d\n", (A > 2) & (B <= 3));
//   return 0;
//}

////2
//#include <stdio.h>
//int main(void)
//{
//   int A,B,C;
//   printf("Введите A:");
//   scanf ("%i", &A);
//
//   printf("Введите B:");
//   scanf ("%i", &B);
//
//   printf("Введите C:");
//   scanf ("%i", &C);
//
//    printf("%d\n", (A < B) & (B < C));
//    return 0;
//}

////3
//#include <stdio.h>
//int main(void){
//   int A;
//   printf("Введите число:");
//   scanf ("%i", &A);
//    printf("%d\n",(A > 9) & (A < 100) & (A % 2 == 0));
//    return 0;
//}

////4
//#include <stdio.h>
//int main(void){
//   int A;
//   printf("Введите число:");
//   scanf ("%i", &A);
//   printf("%d\n",(((A / 100) > (A % 100 / 10)) & ((A % 100 / 10) > (A % 10)))|(((A / 100)<(A % 100/10)) & ((A % 100 / 10)<(A % 10))));
//   return 0;
//}

////5
//#include <stdio.h>
//int main(void){
//   int A;
//   printf("Введите число: ");
//   scanf ("%i", &A);
//   printf("%d\n",A % 10 == A / 1000 & A % 100 / 10 == A % 1000 / 100);
//   return 0;
//}

////6
//#include <stdio.h>
//int main(void){
//   float a,b,c;
//   printf("Введите сторону a: ");
//   scanf ("%f", &a);
//   printf("Введите сторону b: ");
//   scanf ("%f", &b);
//   printf("Введите сторону c: ");
//   scanf ("%f", &c);
//   printf("%d\n",(a * a == b * b + c * c) | (b * b == a * a + c * c) | (c * c == a * a + b * b));
//   return 0;
//}

//7
#include <stdio.h>
int main(void){
   float a,b,c;
   printf("Введите сторону a: ");
   scanf ("%f", &a);
   printf("Введите сторону b: ");
   scanf ("%f", &b);
   printf("Введите сторону c: ");
   scanf ("%f", &c);
   printf("%d\n",(a < b + c) & (b < a + c) & (c < a + b));
   return 0;
}
