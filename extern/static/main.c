#include <stdio.h>
#include <stdlib.h>
void display();
void main()
{
    display();
    display();
}
void display()
{
    static int s=0;
    s++;
    printf("\n s=%d",s);
    if(s<=10){
    display();
    }
}
