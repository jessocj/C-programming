#include <stdio.h>
#include <stdlib.h>
//user defined data type
//integral clone functions are used
#if 0
enum status
{
    Fail=0,
    Pass=1
};
void main()
{
    printf("Hello world!\n");
    enum status result=Pass;
    if(result==Pass){
        printf("hey you passed this one!");
    }
    else
        printf("damn you lose again!");
    return;
}

#endif // 1
#if 0
enum status
{
    Fail=0,
    Pass=1
};
void main()
{
    printf("Hello world!\n");
    enum status result=Pass;
    switch(result)
    {
    case Pass:
        printf("hey you passed this one!");
        break;
    case Fail:
        printf("damn you lose again!");

    }
}
#endif // 1
#if 0
enum Day
{
    Sunday=0,
    Monday=1,
    Tuesday=2,
    Wednesday=3,
    Thursday=10,
    Friday=14,
    Saturday

};
void main()
{
    printf("Hello world!\n");
    enum Day today=Saturday;
    scanf("%d",&today);
    switch(today)
    {
    case Saturday : case Sunday:
        printf("this is weekend cmonnn!");
        break;
    case Monday: case Tuesday : case Wednesday : case Thursday :case Friday:
        printf("nah go to job yaar");
        break;
    default:
        printf("invalid key");
    }
}
#endif // 1
#if 0
enum led_state
{
    off=0,
    on=1
};
struct device
{
    int device_id;
    enum led_state state;
};
void main()
{
    struct device led1;
    led1.device_id=101;
    led1.state=on;
    switch(led1.state)
    {
    case on:
        printf("device id :%d is on\n",led1.device_id);
        break;
    case off:
        printf("device id :%d is off\n",led1.device_id);
        break;
    default:
        printf("invalod led state");

    }
}
#endif // 2
#if 1
typedef enum led
{
    off=0,
    on=1
}LED;
struct device
{
    LED state;
};
void main()
{
    struct device D;
    D.state=1;
    switch(D.state)
    {
    case on:
        printf("device is on\n");
        break;
    case off:
        printf("device is off\n");
        break;
    default:
        printf("invalod led state");

    }
}
#endif // 1
