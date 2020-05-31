#include <stdio.h>
#include <math.h>
#include <stdlib.h>


void array_print(int n,char ary[][2]){
    int i;

    for(i=0;i<n;i++){
        printf("%c\t",ary[i][0]);
        printf("%d\n",ary[i][1]);
        printf("\n");
    }
}

int main(){
    int i;
    int n=11;
    char oned_ary[n];
    char twod_ary[n][2];//={"c0","c1"};

    for(i=0;i<n;i++){
        oned_ary[i]=i;
        //printf("%d\n",oned_ary[i]);

        twod_ary[i][0]='c';
        twod_ary[i][1]=i;
        //printf("%c\n",twod_ary[i][0]);
        //printf("%d\n",twod_ary[i][1]);
    }

    /*printf("%s\n",*twod_ary);
    printf("%d\n",sizeof(*twod_ary));
    printf("%d\n",sizeof(twod_ary)/sizeof(*twod_ary));*/
    array_print(sizeof(twod_ary)/sizeof(*twod_ary),twod_ary);

    return 0;
}