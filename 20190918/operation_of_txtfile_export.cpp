#include <stdio.h>

int main()
{
    /* ファイルの書き込み : fputs()を使った方法 */
    FILE *fp1;

    fp1 = fopen("txt_1.txt", "w"); /* "w"にした時と"a"にした時の違い */
    if(fp1 == NULL){ /* ファイルポインタがNULLでないか必ず確認する */
        return 1;
    }
    fputs("Hello\n", fp1); /* 文字列を書き出す場合 */
    fputs("World\n", fp1);
    fputs("!\n", fp1);
    fclose(fp1);


    /* ファイルの書き込み : fprintf()を使った書き出しの方法 */
    int a = 5;
    FILE *fp2;

    fp2 = fopen("txt_2.txt", "w");
    if(fp2 == NULL){ /* ファイルポインタがNULLでないか必ず確認する */
        return 1;
    }
    fprintf(fp2, "Hello\n"); /* テキストデータ( = 文字列+数値？)を書き出す場合 */
    fprintf(fp2, "World\n");
    fprintf(fp2, "! * %d\n", a);
    fclose(fp2);
}