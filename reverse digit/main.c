#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,tens,hundreds,result;
    printf("enter two digit number: ");
    scanf("%d",&num);
    result=(num%10)*10+(num/10);
    printf("the reversed digit is: %d",result);
    return 0;
}
