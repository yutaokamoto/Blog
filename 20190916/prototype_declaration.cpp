#include <stdio.h>

int addnum(int, int); /* プロトタイプ宣言
                        　宣言の仕方に注意 */
 /* int addnum(int a, int b); と書いても良い */

int main()
{
    printf("%d\n", addnum(20,30));
}

int addnum(int a, int b)
{
    int x;
    x = a + b;
    return x;
}