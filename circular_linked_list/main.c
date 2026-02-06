#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insert(struct node **h);
void disp(struct node *head);
void create(struct node **h);


void main()
{
    struct node *head=NULL;
    /*insert(&head);
    insert(&head);
    insert(&head);
    disp(head);*/
    int choice;
    while(1)
    {
        printf("\nEnter your choice: \n1.Creation\n2.Display\n3.Insert 1st\n4.Create at a Position\n5.Delete at first\n6.Delete at Last\n7.Delete at Position\n8.Sort in Ascending\n0.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert(&head);
            break;
            case 2:disp(head);
            break;
            case 3:create(&head);
            break;
           /* case 4:pos(&head);
            break;
            case 5:del_first(&head);
            break;
            case 6:del_last(&head);
            break;
            case 7:del_pos(&head);
            break;
            case 8:sort(&head);
            break;*/
            case 0:printf("\n Code terminated");
            exit(0);
            default:printf("\nenter valid choise");
        }
    }
}

//display
void disp(struct node *head)
{
    struct node *t=head;
    printf("\n");
    while(t->next!=head)
    {
        printf("%d->",t->data);
        t=t->next;
    }
    printf("%d\n",t->data);
}

//insert elements
void insert(struct node **h)
{
    struct node *temp=*h;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("error");
        return;
    }
    printf("\nenter the data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(*h==NULL)
    {
        *h=newnode;
        newnode->next=*h;
    }
    else
    {
        while(temp->next!=*h)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=*h;
    }

}
void create(struct node **h)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("error");
        return;
    }
    printf("enter the data :");
    scanf("%d",&newnode->data);
    struct node *temp=*h;
    while(temp->next!=*h)
        temp=temp->next;
    newnode->next=*h;
    temp->next=newnode;
    *h=newnode;
}
