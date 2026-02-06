#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next,*prev;
};
void insert(struct node **h,struct node **t);
void disp(struct node *head,struct node *tail);
void create(struct node **h);
void pos(struct node **h);
void del_pos(struct node **h,struct node **t);

void main()
{
    struct node *head=NULL,*tail=NULL;
    int choice;
    while(1)
    {
        printf("\nEnter your choice: \n1.Creation\n2.Display\n3.Insert between\n4.Create at a Position\n5.Delete at Position\n8.Sort in Ascending\n0.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert(&head,&tail);
            break;
            case 2:disp(head,tail);
            break;
            case 3:create(&head);
            break;
            case 4:pos(&head);
            break;
            case 5:del_pos(&head,&tail);
            break;
           /* case 8:sort(&head);
            break;*/
            case 0:printf("\n Code terminated");
            exit(0);
            default:printf("\nenter valid choise");
        }
    }
}
void insert(struct node **h,struct node **t)
{
    struct node *temp=*h ,*temp2=*t;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("error");
        return;
    }
    printf("\nenter the data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if((*h==NULL) &&(*t==NULL))
    {
        *h=newnode;
        *t=newnode;
    }
    else
    {
        temp2->next=newnode;
        newnode->prev=temp2;
        *t=newnode;
    }
}
void disp(struct node *head,struct node *tail)
{
    struct node *h=head;
    printf("\n");
    while(h!=NULL)
    {
        printf("%d->",h->data);
        h=h->next;
    }
    printf("NULL\n");

    struct node *t=tail;
    printf("\n");
    while(t!=NULL)
    {
        printf("%d->",t->data);
        t=t->prev;
    }
    printf("NULL\n");
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
    newnode->next=*h;
    newnode->prev=NULL;
    (*h)->prev=newnode;
    *h=newnode;
}
void pos(struct node **h)
{
    int pos;
    struct node *temp=*h;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("error");
        return;
    }
    printf("\nEnter tyhe position:");
    scanf("%d",&pos);
    printf("\nEnter the Data :");
    scanf("%d",&newnode->data);
    if(pos==1)
    {
        newnode->next=*h;
        *h=newnode;
    }
    for(int i=1;temp!=NULL && i<pos-1;i++)
    {
        temp=temp->next;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    newnode->next->prev=newnode;
    temp->next=newnode;
}
void del_pos(struct node **h,struct node **t)
{
    struct node *temp=*h;
    struct node *temp2=*t;

    int pos;

    if(*h==NULL)
    {
        printf("\nList is Empty\n");
        return;
    }
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    printf("\nLength =%d\n",len);
    printf("\n enter the position :");
    scanf("%d",&pos);
    if(pos==0)
    {
        printf("enter a valid pos \n");
        return;
    }
    else if(pos==1){
        *h=(*h)->next;
        (*h)->prev=NULL;
        //free(temp);
    }
    else if(pos<len)
    {
        temp=*h;
        for(int i=1;i<pos;i++)
            temp=temp->next;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}
