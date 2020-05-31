#include <stdio.h>

int main()
{
    /* ファイルの読み込み : 一行のみ */
    char s1[10];
    FILE *fp1;

    fp1 = fopen("txt_1.txt", "r");
    if(fp1 == NULL){
        return 1;
    }
    fgets(s1, 7, fp1);
    fclose(fp1);

    printf("%s\n", s1);


    /* ファイルの読み込み : ファイル全体 */
    int i = 1;
    char s2[30];
    FILE *fp2;

    fp2 = fopen("txt_2.txt", "r");
    if(fp2 == NULL){
        return 1;
    }
    while(1){
        fgets(s2, 10, fp2);
        if(feof(fp2) == true){
            break;
        }
        printf("%04d : %s", i, s2);
        i++;
    }
    fclose(fp2);
}