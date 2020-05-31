#include <stdio.h>

int main()
{
    short buf[] = {
        0x10,
        0x20,
        0x30
    };
    FILE *fp;

    fp = fopen("binary.bin", "wb");
    fwrite(buf, sizeof(short), 3, fp);
    fclose(fp);
}