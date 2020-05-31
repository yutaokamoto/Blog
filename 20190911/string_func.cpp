#include <stdio.h>
#include <string.h> /*下記の関数を使うためにはこれをインクルードしなくてはならない*/

int main()
{
    /*strlen() : 文字列の長さを得る*/
    char a[]="Hello World!";
    printf("%lu\n", strlen(a)); /*%dだとエラーが出る*/
    int i=strlen(a);
    printf("%d\n", i);

    /*strcpy() : 文字列をコピーする*/
    char b[10];
    strcpy(b, "HEllo");
    printf("%s\n", b);

    /*strncat() : 文字列を結合する*/
    /*文字列cに文字列dを結合する*/
    char c[20]="Hello", d[]="World!";
    strcat(c, " ");
    strcat(c, d);
    printf("%s\n", c);

    /*strncat() : 文字列をn文字連結する*/
    /*文字列ccに文字列ddをn文字連結する*/
    char cc[]="Snoop", dd[]="Doggy";
    strcat(cc, " ");
    strncat(cc, dd, 10);/*n >= ddの文字数*/
    printf("%s\n", cc);
    strcat(cc, " ");
    strncat(cc, dd, 4);/*n <= ddの文字数*/
    printf("%s\n", cc);

    /*strcmp() : 文字列を比較する */
    /*(２つの文字列a,bを比較した結果は整数で、0のとき           aとbは等しい
                                        0よりも大きいとき   aの方がbよりも辞書的に後
                                        0よりも小さいとき   aの方がbよりも辞書的に前)*/
    int e;
    e = strcmp("w", "b");
    printf("%d\n", e);

    /*sprintf() : 数値などを文字列に変換する*/
    char f[20];
    sprintf(f, "%f", 68.1);
    printf("%s\n", f);
    /*atoi() : 文字列を数値に変換する*/
}