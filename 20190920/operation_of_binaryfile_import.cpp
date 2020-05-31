#include <stdio.h>

int main()
{
    short buf[3];
    FILE *fp;
    fp = fopen("binary.bin", "rb");
    fread(buf, sizeof(short), 3, fp);
    fclose(fp);

    /* printf("%d\n", buf); */
}