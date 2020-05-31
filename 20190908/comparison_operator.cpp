#include <stdio.h>

int main()
{
    int a=1, b=1;
    /*条件式はは条件式が真のとき1, 偽のとき0という値をもつ*/
    /*代入式は代入した値がその式全体の値になる*/
    printf("a==b・・・%d\n", a==b);
    printf("a!=b・・・%d\n", a!=b);
    printf("a<b・・・%d\n", a<b);
    printf("a>b・・・%d\n", a>b);
    printf("a<=b・・・%d\n", a<=b);
    printf("a>=b・・・%d\n", a>=b);
    printf("a=b・・・%d\n", (a=b));
}