#include <stdio.h>
#include <stdlib.h>
/* memory segment
   --------------
--------------
    stack     ---> R/W
--------------
    heap      ---> R/W
--------------
    data      ---> R/W
--------------
    code      --->read only
---------------
*/
#if 0
//local variable--stored in stack
void function();
int main()
{
    printf("Hello world!\n");
    function();
    printf("%d",x);
    return 0;
}
void function()
{
    int x=10;//local variable
    printf("%d",x);
}
#endif // 1
#if 0
//global variable--stored in stack
void function();
int x=10;//global variable
int main()
{
    printf("Hello world!\n");
    printf("%d\n",x);
    function();
    return 0;
}
void function()
{
    int x=11;//local variable
    printf("%d\n",x);
}
#endif // 2
#if 0
//const and define
#define pi 3.14 //macro
void function();
const int x=10;//--read only cannot be changed later
int main()
{
    //const int x=10;//const variable --stored in code
    printf("Hello world!\n");
    function();
    printf("%d\n",x);
    printf("%f\n",pi);
    return 0;
}
void function()
{
    int x=11;//local variable
    printf("%d\n",x);
}
#endif // 3
#if 0
//static variable
void display();
static int s=0;
void main()
{
    int a=10;
    printf("a=%d",a);
    display();
    display();
    printf("\n%d-inside main\n",s);
}
void display()
{
    //int s=0;
   // static int s=0;
    s++;
    printf("\nhello");
    printf("\ns=%d",s);
}

#endif // 4
#if 1
#include <stdio.h>

void myFunction() {
    int normal_var = 10;          // Implicitly automatic
    auto int auto_var = 20;       // Explicitly automatic (redundant in C)

    // Both variables have the same scope and lifetime.
    printf("Normal var: %d, Auto var: %d\n", normal_var, auto_var);
}

int main() {
    myFunction();
    return 0;
}
#endif // 1
