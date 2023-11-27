//1
#include<stdio.h>
#include<math.h>
#include <stdlib.h>
int main(){
    float x1, y1, x2, y2; //заводим переменные типа флоат
    printf("Введите х1: ");
    scanf("%f", &x1); //сканф берет адрес переменной
    printf("Введите y1: ");
    scanf("%f", &y1);
    printf("Введите х2: ");
    scanf("%f", &x2);
    printf("Введите y2: ");
    scanf("%f", &y2);
    printf("Расстояние между точками = %f\n",sqrt(pow(x1-x2,2)+pow(y1-y2,2))); //√(xb - xa)2 + (yb - ya)2
}
//2
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void){
    float A, B, C;
    printf("Введите точку A = ");
    scanf ("%f", &A);
    printf("Введите точку B = ");
    scanf ("%f", &B);
    printf("Введите точку C = ");
    scanf ("%f", &C);
    float AC = abs(A - C);
    printf("Отрезок AC = %f\n",AC);
    float BC = abs(B - C);
    printf("Отрезок BC = %f\n",BC);
    printf("Сумма отрезков AC + BC = %f\n",BC + AC);
}

//3
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(void){
    float A, B, C;
    printf("Введите точку А = ");
    scanf ("%f", &A);
    printf("Введите точку В = ");
    scanf ("%f", &B);
    printf("Введите точку C = ");
    scanf ("%f", &C);
    float AC = abs(A - C);
    printf("Отрезок АС = %f\n",AC);
    float BC = abs(B - C);
    printf("Отрезок BC = %f\n",BC);
    printf("Сумма отрезков AC * BC = %f\n", AC * BC);
}

//4
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int x1, y1, x2, y2;
    printf("Введите координату x1: ");
    scanf("%d", &x1);
    printf("Введите координату x2: ");
    scanf("%d", &x2);
    printf("Введите координату y1: ");
    scanf("%d", &y1);
    printf("Введите координату y2: ");
    scanf("%d", &y2);
    printf("Периметр равен %d\n",2 * (abs(x1 - x2)+abs (y1 - y2)));
    printf("Площадь равна %d\n",abs (x1 - x2) * abs (y1-y2));
    return 0;
}

//5
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    float x1, y1, x2, y2, x3, y3;
    printf("Введите координату x1: ");
    scanf("%f", &x1);
    printf("Введите координату y1: ");
    scanf("%f", &y1);
    printf("Введите координату x2: ");
    scanf("%f", &x2);
    printf("Введите координату y2: ");
    scanf("%f", &y2);
    printf("Введите координату x3: ");
    scanf("%f", &x3);
    printf("Введите координату y3: ");
    scanf("%f", &y3);
    float a = sqrt(pow (x2-x1, 2) + pow (y2-y1, 2));
    float b = sqrt(pow (x3-x1, 2) + pow (y3-y1, 2));
    float c = sqrt(pow (x3-x2, 2) + pow (y3-y2, 2));
    float p = a + b + c;
    printf("Периметр равен = %f\n", p);
    printf("Площадь равна = %f\n", sqrt(p * (p - a) * (p - b) * (p - c)));
}
