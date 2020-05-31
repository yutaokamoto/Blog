#include <stdio.h>

int main()
{
    /* 最初の要素以外の要素にアクセスしたい場合は、ポインタの加算・減算を行う */

    int a[10]={0,1,2,3,4,5,6,7,8,9};
    int *p=a+2;
    int *q=p-1;

    printf("%x\n", a); /* 配列名そのものは、配列の一番最初の要素へのポインタの役割をする */
    printf("%d\n", *a); /* 配列の一番最初の要素の値を表示することになる */

    printf("%x\n", p);
    printf("%x\n", *p);
    printf("%x\n", q);
    printf("%x\n", *q);

    printf("配列aの9番目の要素の値は%d\n", *(a+8));
}