#include <stdio.h>
int main(void){
    printf("1-я задача\n");
    int a[1000];
    int n,k,l;
    printf("Введите размер массива: ");
    scanf("%i",&n);
    printf("Введите первый элемент >1: ");
    scanf("%i",&k);
    printf("Введите последний элемент, не превышающий число размерности:: ");
    scanf("%i",&l);
    int i;
    for (i=0; i<n; ++i){
        printf("a[%i] : ",i+1);
        scanf("%i",&a[i]);
    }
    int sum = 0;
    for (i = k - 1; i <= l - 1; ++i){
        sum += a[i];
    }
    printf("%f\n ", (float)sum/(float)(l-k+1));
    printf("2-я задача\n");
    int b[1000];
    int N;
    printf("Введите размер массива, учтите, массив не должен содержать одинаковые числа: ");
    scanf("%i",&N);
    int j;
    for (j=0; j<N; ++j){
        printf("b[%i] : ",j+1);
        scanf("%i",&b[j]);
    }
    int d=b[1]-b[0];
    for (j=1; j<N; ++j) {
        if (d!=b[j]-b[j-1]) {
            d=0;
        }
    }
    printf("%i\n ",d);
    printf("3-я задача\n");
    int c[1000];
    int n1;
    printf("Введите размер массива: ");
    scanf("%i",&n1);
    int o;
    for (o=0; o<n1; ++o){
        printf("c[%i] : ",o+1);
            scanf("%i",&c[o]);
        }
        int min = c[1];
        for (o=1; o<n1; o+=2) {
            if (c[o]<min)
                min=c[o];
        }
        printf("%i\n",min);
    printf("4-я задача\n");
    int h[1000];
    int n2;
    printf("Введите размер массива: ");
    scanf("%i",&n2);
    int y;
    for (y=0; y<n2; ++y){
        printf("h[%i] : ",y+1);
        scanf("%i",&h[y]);
    }
    if (h[n2-1]>h[n2-2]){
        printf("%i \n",n2);
    } else {
        y = n2-2;
        while ((y>=1) && !((h[y-1]<h[y]) &&(h[y]>h[y+1]))) {
                --y;
            }
        printf("%i \n",y+1);
        }
    printf("5-я задача\n");
    int f[1000];
    int n3;
    printf("Введите размер массива, учтите, что массив должен содержать два одинаковых элемента по значению: ");
    scanf("%i",&n3);
    int x;
    for (x=0; x<n3; ++x){
        printf("f[%i] : ",x+1);
        scanf("%i",&f[x]);
    }
 
    int x2;
    for (x=0; x<n3-1;++x){
        for (x2=x+1; x2<n3;++x2){
            if (f[x]==f[x2]){
                printf("%i %i\n",x+1,x2+1);
            }
        }
    }
 
    return 0;
}
