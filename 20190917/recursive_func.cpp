#include <stdio.h>
#include <stdlib.h>

int fibonacci1(int);
int fibonacci2(int);

int main()
{
    printf("%d\n", fibonacci1(5));
    printf("%d\n", fibonacci2(5));

}

int fibonacci1(int n)
{
    if(n == 1){
        return 1;
    }else{
        return n*fibonacci1(n-1);
    }
}

int fibonacci2(int n)
{
    if(n == 1){
        return 1;
    }
    return n*fibonacci2(n-1);
}