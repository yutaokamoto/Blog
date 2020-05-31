#include <stdio.h>
#include <string.h>

int main()
{
    /*ASCIIコードによって定められている数字は0~127*/
    char a = -1;
    printf("a = %dのとき\n", a);
    printf("%d\n", a);
    printf("%c\n", a);
    printf("\n");

    a = 10;
    printf("a = %dのとき\n", a);
    printf("%d\n", a);
    printf("%c\n", a);
    printf("\n");


    a = 'A';    
    printf("a = %d(=%c)のとき\n", a,a);
    printf("%d\n", a);
    printf("%c\n", a);
    printf("%s\n", a);
    printf("\n");

    char A[] = "";
    printf("A[] = \"\"のとき\n");
    printf("%d\n", A);
    printf("%c\n", A);
    printf("%s\n", A);
    printf("\n");

    strcpy(A, "A");
    printf("A[] = \"A\"のとき\n", A);
    printf("%d\n", A);
    printf("%c\n", A);
    printf("%s\n", A);

    /*キーボードから入力された半角文字１つを得る*/
    char c;
    c=getchar();
    printf("%c\n", c);
}