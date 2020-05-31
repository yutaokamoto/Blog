#include <stdio.h>

int main()
{
    int x, y;/*カウンタの用意*/
    int a[2][3]={
        {1,2,3},
        {4,5,6}
    };/*多次元配列の初期化*/

    for(x=0;x<2;x++){
        for(y=0;y<3;y++){
            printf("a[%d][%d]=%d", x, y, a[x][y]);
            printf("\t");
        }
        printf("\n");
    }
}