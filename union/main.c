#include <stdio.h>
#include <stdlib.h>
//comes with padding
//highest memory is taken
//similar as struct
union std{char name[10];char a ;char c;int id;};

union std s;
int main()
{
    printf("%d",sizeof(s));
    return 0;
}
