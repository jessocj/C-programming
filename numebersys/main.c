#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=123;//decimal---------%d
    int b=0123;//octal----------%o
    int c=0x123;//hexadecimal---%x
    int d=0b11110;//binary-------any above
    printf("numbers are :%d %o %x %x\n",a,b,c,d);
    return 0;
}
