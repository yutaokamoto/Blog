#include <stdio.h>

int main()
{
    /*while文とdo~while文の違い*/
    /*while文は条件によってはループ内の処理を一度もしない場合があるのに対し、:/
    /*do~while文は必ず一度は処理を行う(1回目のwhileループに入る前)*/

    char c;
    do {
        c=getchar();
        printf("%c\n", c);
    }while(c!='e');

    /*無限ループを作るにはwhile文の条件を表す式の値が恒等的に1になるようにする --> while(1){};*/
}