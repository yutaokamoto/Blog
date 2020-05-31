#include <stdio.h>

void swapbyval(int, int);
void swapbyref(int *, int *);

int main()
{
    int a = 0, b = 1;
    swapbyval(a, b); /* a,bに改めて代入する必要はなく、関数を実行するだけでよい */
    printf("a = %d, b = %d\n", a,b);
    swapbyref(&a, &b);
    printf("a = %d, b = %d\n", a,b);
}

void swapbyval(int a, int b)
{
    int buf;
    buf = a;
    a = b;
    b = buf;
}

/* 実引数が変数のアドレスなので、仮引数はポインタ */
void swapbyref(int *a, int *b)
{
    int buf;
    buf = *a; /* aとbのアドレスはそれぞれ変わらないが、それらのアドレスが保持する値が変わる */
    *a = *b; /* ポインタの指すアドレスの値を変更したい場合 : *ポインタ変数名=値 */
    *b = buf;
}