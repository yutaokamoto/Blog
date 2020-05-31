#include <stdio.h>
#include <math.h>

double distance(double,double,double,double);

int main()
{   
    printf("%f\n", distance(1.0,1.0,0.0,0.0));
    return 0;
}

double distance(double c1_x,double c1_y,double c2_x,double c2_y)
{
    return sqrt(pow(c1_x-c2_x,2)+pow(c1_y-c2_y,2));
}