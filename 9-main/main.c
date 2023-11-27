////1
//#include <stdio.h>
//int main(void){
//    int N;
//    printf("Введите количество секунд N = ");
//    scanf ("%i", &N);
//    printf("Количество секунд, прошедших с начала последней минуты = %i\n",N % 60);
//    return 0;
//}

////2
//#include <stdio.h>
//int main(void){
//    int K;
//    printf("Введите день K = ");
//    scanf ("%i", &K);
//    printf("Номер дня недели = %i\n",K % 7);
//    return 0;
//}

////3
//#include <stdio.h>
//int main(void){
//    int K, N;
//    printf("Введите день K = ");
//    scanf ("%i", &K);
//    printf("Введите каким номером был понедельник N = ");
//    scanf ("%i", &N);
//    printf("Номер дня недели = %i\n",((K+N-2) % 7) + 1);
//    return 0;
//}

////4
//#include <stdio.h>
//int main(void){
//    int A,B,C;
//    printf("Введите A = ");
//    scanf ("%i", &A);
//    printf("Введите B = ");
//    scanf ("%i", &B);
//    printf("Введите C = ");
//    scanf ("%i", &C);
//    printf("Количество квадратов, размещенных на прямоугольнике = %i\n",(A / C) * (B / C));
//    printf("Площадь незанятой части прямоугольника %i\n",A * B - (A / C) * (B / C)*C*C);
//    return 0;
//}

//5
#include <stdio.h>
int main(void){
    int y;
    printf("введите номер года = ");
    scanf ("%i", &y);
    printf("Соответсвующий номер столетия = %i\n",((y-1)/100)+1);
    return 0;
}
