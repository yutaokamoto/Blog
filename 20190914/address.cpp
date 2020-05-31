#include <stdio.h>

int main()
{
    int a=100;
    int a_prime=200;
    short b;
    char *c;

    /*アドレスを16進数表記したいから%xを使う！*/
    //そうじゃない場合は%pを使う
    //ある変数のアドレスに1足すっていうのは，その変数のサイズ分進むってことかも
    //int型が格納されているオブジェクトとshort型のオブジェクトでは進むアドレスの数が違う
    //詳しくは20200422の日記に書いた
    printf("aの値は%d,アドレスは%pです。\n", a, &a);
    printf("aの値は%d,アドレスは%pです。\n", *(&a_prime+1), &a_prime+1);
    printf("%d\n",sizeof(int));
    printf("a_primeの値は%d,アドレスは%pです。\n", a_prime, &a_prime);
    printf("a_primeの値は%d,アドレスは%pです。\n", *(&b+1), &b+1);
    printf("%d\n",sizeof(short));
    printf("bのアドレスは%xです。\n", &b);
    printf("cのアドレスは%xです。", &c);
}