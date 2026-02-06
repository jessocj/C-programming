#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice,qty;
    float total=0;
    char opt;

    printf("---------QUEENS BAKERY------\n");
    printf("-----------MENU CARD--------\n");
    do{
    printf("Main MENU-------------------\n----------------------------\n");

    printf("1)  DRINKS  \n");
    printf("2)  JUICES  \n");
    printf("3)  SNACKS    \n");
    printf("4)  DESSERTS    \n");
    printf("5)  SARBATH    \n");
    printf("6)  SPECIAL    \n");
    printf("EXIT 0\n");
    printf("----------------------------\n");
    printf("Enter the choice (1-6):");
    scanf("%d", &choice);

        if(choice==0)
                break;

        switch(choice)
        {
        case 1:
            printf(" A)TEA\t\t\t12\n B)COFFEE\t\t15 \n C)BOOST\t\t30\n D)HORLICKS\t\t30\n MAIN MENU PRESS 0\n");
            printf("----------------------------\n");
            printf("Enter the choice (A-D):");
            scanf(" %c", &opt);
            printf("Enter the quantity: ");
            scanf("%d",&qty);
            switch(opt)
            {
                case 'A': case 'a':
                    total += 12 * qty;
                    printf("Selected TEA x %d nos. added to the order\n",qty);
                    break;
                case 'B': case 'b':
                    total += 15 * qty;
                    printf("Selected COFFEEx %d nos. added to the order\n",qty);
                    break;
                case 'C': case 'c':
                    total += 30 * qty;
                    printf("Selected BOOST x %d nos. added to the order\n",qty);
                   break;
                case 'D': case'd':
                    total += 30 * qty;
                    printf("Selected HORLICKSx %d nos. added to the order\n",qty);
                    break;
                case '0':
                    printf("GO TO MAIN MENU");
                default: printf("invalid sub choice.\n");
            }
            printf("============================\n");
            break;
        case 2:
            printf(" A)ORANGE\n B)PINEAPPLE \n C)CARROT\n D)MUSAMBI\n MAIN MENU PRESS 0\n");
            printf("Enter the choice (A-E):");
            scanf(" %c", &opt);
            printf("Enter the quantity: ");
            scanf("%d", &qty);
            switch(opt)
            {
                case 'A': case 'a':
                    total += 50 * qty;
                    printf("Selected ORANGE x %d nos. added to the order\n",qty);
                    break;
                case 'B': case 'b':
                    total += 50 * qty;
                    printf("Selected PINEAPPLEx %d nos. added to the order\n",qty);
                    break;
                case 'C': case 'c':
                    total += 50 * qty;
                    printf("Selected CARROT x %d nos. added to the order\n",qty);
                   break;
                case 'D': case'd':
                    total += 50 * qty;
                    printf("Selected MUSAMBI x %d nos. added to the order\n",qty);
                    break;
                case 'E': case'e':
                    total += 50 * qty;
                    printf("Selected APPLE x %d nos. added to the order\n",qty);
                    break;
                case '0':
                    printf("GO TO MAIN MENU");
                default: printf("invalid sub choice.\n");
            }
            printf("============================\n");
            break;

        case 3:
            printf(" A)VADA\n B)PUFFS \n C)CUTLET\n D)SANDWICH\n E)CREAM BUN \n MAIN MENU PRESS 0\n");
            printf("Enter the choice (A-E):");
            scanf(" %c",&opt);
            printf("Enter the quantity: ");
            scanf("%d",&qty);
            switch(opt)
            {
                case 'A': case 'a':
                    total += 12 * qty;
                    printf("Selected VADA x %d nos. added to the order\n",qty);
                    break;
                case 'B': case 'b':
                    total += 20 * qty;
                    printf("Selected PUFFS x %d nos. added to the order\n",qty);
                    break;
                case 'C': case 'c':
                    total += 20* qty;
                    printf("Selected CUTLET x %d nos. added to the order\n",qty);
                   break;
                case 'D': case 'd':
                    total += 25 * qty;
                    printf("Selected SANDWICHx %d nos. added to the order\n",qty);
                    break;
                case 'E': case 'e':
                    total += 15 * qty;
                    printf("Selected CREAM BUNx %d nos. added to the order\n",qty);
                    break;
                case '0':
                    printf("GO TO MAIN MENU");
                    break;
                default: printf("invalid sub choice.\n");
            }
            printf("============================\n");
            break;
        case 4:
            printf(" A)OREO SHAKE\n B)SHARJAH SHAKE \n C)PISTA SHAKE\n D)KITKAT SHAKE E)CASATTA\n MAIN MENU PRESS 0\n");
            printf("Enter the choice (A-E):");
            scanf(" %c",&opt);
            printf("Enter the quantity: ");
            scanf("%d",&qty);
            switch(opt)
            {
                case 'A': case 'a':
                    total += 60 * qty;
                    printf("Selected OREO SHAKEx %d nos. added to the order\n",qty);
                    break;
                case 'B': case 'b':
                    total += 60 * qty;
                    printf("Selected SHARJAH SHAKEx %d nos. added to the order\n",qty);
                    break;
                case 'C': case 'c':
                    total += 60 * qty;
                    printf("Selected PISTA SHAKEx %d nos. added to the order\n",qty);
                   break;
                case 'D': case 'd':
                    total += 60 * qty;
                    printf("Selected KITKAT SHAKEx %d nos. added to the order\n",qty);
                    break;
                case 'E': case 'e':
                    total += 30 * qty;
                    printf("Selected CASATTAx %d nos. added to the order\n",qty);
                    break;
                case '0':
                    printf("GO TO MAIN MENU");
                default: printf("invalid sub choice.\n");
            }
            printf("============================\n");
            break;
        case 5:
            printf(" A)SODA SARBATH\n B)MILK SARBATH \n C)UPPU SODA\n D)NELIKKA KANTHARI E)MASALA SODA\n MAIN MENU PRESS 0\n");
            printf("Enter the choice (A-E):");
            scanf(" %c",&opt);
            printf("Enter the quantity: ");
            scanf("%d",&qty);
            switch(opt)
            {
                case 'A': case 'a':
                    total += 20 * qty;
                    printf("Selected SODA SARBATHx %d nos. added to the order\n",qty);
                    break;
                case 'B': case'b':
                    total += 30 * qty;
                    printf("Selected MILK SARBATHx %d nos. added to the order\n",qty);
                    break;

                case 'C': case 'c':
                    total += 15 * qty;
                    printf("Selected UPPU SODA x %d nos. added to the order\n",qty);
                   break;
                case 'D': case 'd':
                    total += 30 * qty;
                    printf("Selected NELLIKKA KANTHARI x %d nos. added to the order\n",qty);
                    break;
                case 'E': case'e':
                    total += 25 * qty;
                    printf("Selected MASALA SODA.x %d nos. added to the order\n",qty);
                    break;
                case '0':
                    printf("GO TO MAIN MENU");
                default: printf("invalid sub choice.\n");
            }
            printf("============================\n");
            break;

        case 6:
            printf(" A)KANTHARI MOTTA\n B)MOJITO \n C)PASSION JUICE\n D)DRAGON SODA\n MAIN MENU PRESS 0\n");
            printf("Enter the choicYEe (A-E):");
            scanf(" %c",&opt);
            printf("Enter the quantity: ");
            scanf("%d",&qty);
            switch(opt)
            {
                case 'A': case 'a':
                    total += 15 * qty;
                    printf("Selected KANTHARI MOTTA.x %d nos. added to the order\n",qty);
                    break;
                case 'B': case 'b':
                    total += 40 * qty;
                    printf("Selected MOJITO. x %d nos. added to the order\n",qty);
                    break;
                case 'C': case 'c':
                    total += 30 * qty;
                    printf("Selected PASSION JUICE. x %d nos. added to the order\n",qty);
                   break;
                case 'D': case 'd':
                    total += 30 * qty;
                    printf("Selected DRAGON SODA. x %d nos. added to the order\n",qty);
                    break;
                case '0':
                    printf("GO TO MAIN MENU");
                default: printf("invalid sub choice.\n");
            }
            printf("============================\n");
            break;
        default:
            printf("invalid menu choice ");
        }
    }while(1);
    printf("\n------------------------------\n");
    printf("Total Bill: Rs. %.2f\n", total);
    printf("Thank you! Visit again \n");



    return 0;
}
