#include <stdio.h>

int main()
{
    int x, y, a=1, b=1;
    printf("前置だと%d\n", ++a);/*値の表示の前にaが1足される*/
    printf("%d\n", a);
    printf("後置だと%d\n", b++);/*値の表示の後にaが1足される*/
    printf("%d\n", b);

    a=b=1;
    x=++a;
    y=b++;
    printf("前置だとxの値は%d, aの値は%d\n", x, a);/*前置:値の代入の前にaが1足される*/
    printf("後置だとxの値は%d, aの値は%d\n", y, b);/*後置:値の代入の後にaが1足される*/
}