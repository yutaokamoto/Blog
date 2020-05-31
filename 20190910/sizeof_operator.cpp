#include <stdio.h>

int main()
{
    int n, m;

    // sizeof演算子はビット数ではなく，バイト数を返すことに注意．
    n=sizeof(short);/*nはshort型のバイト数になる(処理系に依らず2)*/
    printf("n=%d\n", n); 
    printf("無理やりfloat型で表すと, n=%f\n", n);

    m=sizeof(n);/*mはint型のバイト数になる(処理系に依存する)*/
    printf("m=%d\n", m);

    printf("\n");

    char c=1;
    char s[10]="Hello";

    printf("char型変数cのバイト数=%d\n", sizeof(c));
    printf("文字列型変数sのバイト数=%d\n", sizeof(s));

    float a,b;

    a=sizeof(short);
    printf("a=%f\n", a);
    printf("無理やりint型で表すと, a=%d\n", a);

    b=sizeof(a);
    printf("b=%f\n", b);

    printf("\n");

    printf("mとaの和をint型で表すと, m+a=%d\n", m+a);
    printf("mとaの和をfloat型で表すと, m+a=%f\n", m+a);
}