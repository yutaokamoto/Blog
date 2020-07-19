#include <stdio.h>
#include <memory.h>
#include <mm_malloc.h>
#include <stdlib.h>

//p.77
int main()
{
    short *buf;
        /* ↓malloc()には戻り値がないのでbufと同じ型にキャスト */
    buf = (short *)malloc(sizeof(short)*20);
                /* ↑malloc()は引数で指定したバイト数分のメモリを確保
                    確保できなかったときはNULLを返す */
    //mallocでメモリを確保した後は配列と小野時ように使える．
    buf[0] = 0;
    buf[2] = 20;
    printf("0番目の要素の値は%d\n", *buf); /* 配列名そのものは、配列の一番最初の要素へのポインタの役割をする */
    printf("0番目の要素の値は%d\n", buf[0]);
    printf("0番目の要素のアドレスは%x\n", buf);
    printf("3番目の要素の値は%d\n", buf[2]);
    printf("3番目の要素の値は%d\n", *(buf+2)); /* *buf + 2 ではない！ */

    free(buf);
}