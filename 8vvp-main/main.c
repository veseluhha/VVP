////1
//#include <stdio.h>
//int main(void){
//    int a;
//    printf("введите в байтах = ");
//    scanf ("%d", &a);
//    printf("в килобайтах = %d\n",a/1024);
//    return 0;
//}

////2
//#include <stdio.h>
//int main(void){
//    int A, B;
//    printf("введите длину отрезка A = ");
//    scanf ("%d", &A);
//    printf("Введите длину отрезка B = ");
//    scanf ("%d", &B);
//    printf("Кол-во отрезков В на отрезке А = %d\n",A/B);
//    return 0;
//}

////3
//#include <stdio.h>
//int main(void){
//    int A, B;
//    printf("Введите длину отрезка A = ");
//    scanf ("%d", &A);
//    printf("Введите длину отрезка B = ");
//    scanf ("%d", &B);
//    printf("%d\n",A % B);
//    return 0;
//}

////4
//#include <stdio.h>
//int main(void){
//    int y;
//    printf("Введите число = ");
//    scanf ("%i", &y);
//    printf("После перестановки чисел = %i\n",(y / 10)+(y % 10) * 10);
//    return 0;
//}

//5

#include <stdio.h>
int main(void){
    int A;
    printf("Введите число = ");
    scanf ("%i", &A);
    printf("%i\n",A/100*10 + (A % 100) / 10 * 100 + A % 10);
    return 0;
}
