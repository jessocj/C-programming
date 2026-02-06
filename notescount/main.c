#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amount,note500,note200,note100,note50,note20,note10,coin10,coin5,coin2,coin1;
    printf("ENter the MONEY : ");
    scanf("%d",&amount);

    note500=note200=note100=note50=note20=note10=coin10=coin5=coin2=coin1=0;

    if(amount>=500)
    {
        note500=amount/500;
        amount%=500;
    }
    if(amount>=200)
    {
        note200=amount/200;
        amount%=200;
    }
    if(amount>=100)
    {
        note100=amount/100;
        amount%=100;
    }
    if(amount>=50)
    {
        note50=amount/50;
        amount%=50;
    }
    if(amount>=20)
    {
        note20=amount/20;
        amount%=20;
    }
    if(amount>=10)
    {
        note10=amount/10;
        amount%=10;
    }
    if(amount>=10)
    {
        coin10=amount/10;
        amount%=10;
    }
    if(amount>=5)
    {
        coin5=amount/5;
        amount%=5;
    }
    if(amount>=2)
    {
        coin2=amount/2;
        amount%=2;
    }
    if(amount>=1)
    {
        coin1=amount/1;

    }
    printf("\nno. of notes:\n");
    printf("500 notes: %d\n",note500);
    printf("200 notes: %d\n",note200);
    printf("100 notes: %d\n",note100);
    printf("50 notes: %d\n",note50);
    printf("20 notes: %d\n",note20);
    printf("10 notes: %d\n",note10);
    printf("10 coins: %d\n",coin10);
    printf("5 coins: %d\n",coin5);
    printf("2 coins: %d\n",coin2);
    printf("1 coin: %d\n",coin1);

    return 0;
}
