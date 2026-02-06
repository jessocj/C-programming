#include <stdio.h>
#include <stdlib.h>

int main()
{
    int side1,side2,side3;
    printf("enter the sides of triangle: ");
    scanf("%d%d%d",&side1,&side2,&side3);

/*if((side1+side2>side3) && (side2+side3>side1)  && (side3+side1>side2))
    {
        printf("%d %d %d forms a triangle",side1,side2,side3);
    }
    else{
        printf("doesnt forms a triangle");
    }
    */
    switch(side1+side2>side3)
    {
    case 1:
        switch(side2+side3>side1)
        {
        case 1:
            switch(side3+side1>side2)
            {
            case 1:
                printf("%d %d %d forms a triangle\n",side1,side2,side3);
                break;
            case 0:
                printf("doesnt forms a traingle\n");
                break;
            }
            break;
        case 0:
            printf("doesnt forms a traingle\n");
            break;
        }
        break;
    case 0:
        printf("doesnt forms a traingle\n");
        break;

    }

    return 0;
}
