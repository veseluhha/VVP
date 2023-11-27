////1
//#include <stdio.h>
//int main(void){
//   float c;
//   printf("введите стоимость одного кг ");
//   scanf ("%f", &c);
//   float a;
//   for  (a = 0.1; a <= 1.0;  a += 0.1)
//        printf("%f кг = %f \n ", a, c*a);
//   return 0;
//}

////2
//#include <stdio.h>
//int main(void){
//    int n;
//    printf("Введите число ");
//    scanf ("%i", &n);
//    float a = 1;
//    int i;
//    for  (i = 0; i <= n; ++i)
//        a *= 1.0 + (float)i / 10;
//    printf("результат произведения = %f \n ", a);
//    return 0;
//}

////3
//#include <stdio.h>
//int main(void){
//   int n;
//   printf("Введите число ");
//   scanf ("%i", &n);
//   int a = 0;
//   int i;
//   for  (i = 1; i <= (2*n - 1); i += 2){
//     a += i;
//     printf("%i\n ",a);
//  }
//   return 0;
//}

////4
//#include <stdio.h>
//int main(void){
//    float a;
//    printf("введите вещественное число ");
//    scanf ("%f", &a);
//    int n;
//    printf("Введите целое число ");
//    scanf ("%i", &n);
//    float a0 = 1,res = 1;
//    int i;
//    for  (i = 2; i <= n; ++i){
//       a0 *= a;
//       res += a0;
//    }
//    printf("%.2f\n ",res);
//
//    return 0;
//}

//5
#include <stdio.h>
int main(void){
    float a;
    printf("Введите вещественное число А - ");
    scanf ("%f", &a);
    int n;
    printf("Введите целое число N - ");
    scanf ("%i", &n);
    float a0 = 1, res = 1;
    int i;
    for  (i =2; i<=n; ++i){
       a0 *= -a;
       res += a0;
    }
    printf("%f \n ", res);
    return 0;
}
