#include <stdio.h>
#include <stdlib.h>
#if 0
//NULL is used to cancel wild behaviour
//self referencing  struct
//   -> struct node *next
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *newnode,*newnode2,*newnode3;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=10;
    newnode->next=NULL;
    //newnode memory is created in heap memory using malloc

    newnode2=(struct node*)malloc(sizeof(struct node));
    newnode2->data=20;
    newnode2->next=NULL;

    newnode3=(struct node*)malloc(sizeof(struct node));
    newnode3->data=30;
    newnode3->next=NULL;
//linking data's
    newnode->next=newnode2;
    newnode2->next=newnode3;
    printf("");

    //create a temp pointer and connecting first one to this pointer and similarly others
    struct node *temp=newnode;
    while(temp!=NULL)
    {
        printf("%d ->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    printf("\n  Node data = %d\n", newnode->next->data);
    return 0;
}
#endif // 1
#if 0
struct node
{
    int data;
    struct node *next;
};
void insert(struct node **h);
void disp(struct node *head);
void main()
{
    struct node *head=NULL;//to point at start to avoid dangling assign to null
    insert(&head);//pass cheyanath pointer de reference ahn
    insert(&head);
    insert(&head);
    disp(head);
}
void disp(struct node *head)
{
    struct node *t=head;
    while(t!=NULL)
    {
        printf("%d-> ",t->data);
        t=t->next;
    }
    printf("NULL");
}
void insert(struct node **h)//create double pointer head nte refrence pointed
{
    struct node *temp=*h;
    struct node *newnode=(struct node*)malloc(sizeof(struct node));//dma    memory in heap
    if(newnode==NULL)
    {
        printf("error");
        return;
    }
    printf("enter data :\n");
    scanf("%d",&newnode->data);
    //newnode->data=10;
    newnode->next=NULL;
    if(*h==NULL){
        *h=newnode;
    }
    else{
   // temp->next=newnode;
    while(temp->next!=NULL)//==NULL -stop != traverse
    {
        temp=temp->next;//temp will point to next
        //printf("\n -->%d",temp->data);
    }
    temp->next=newnode;
    }
}

#endif // 1
#if 1
struct node
{
    int data;
    struct node *next;
};
void insert(struct node **h);
void disp(struct node *head);
void create(struct node **c);
void insert_between(struct node **h);
void pos(struct node **h);
void del_first(struct node **h);
void del_last(struct node **h);
void del_pos(struct node **h);
void sort(struct node **h);

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
        printf("\nEnter your choice: \n1.Creation\n2.Display\n3.Insert between\n4.Create at a Position\n5.Delete at first\n6.Delete at Last\n7.Delete at Position\n8.Sort in Ascending\n9.Exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert(&head);
            break;
            case 2:disp(head);
            break;
            case 3:insert_between(&head);
            break;
            case 4:pos(&head);
            break;
            case 5:del_first(&head);
            break;
            case 6:del_last(&head);
            break;
            case 7:del_pos(&head);
            break;
            case 8:sort(&head);
            break;
            case 9:printf("\n Code terminated");
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
    while(t!=NULL)
    {
        printf("%d->",t->data);
        t=t->next;
    }
    printf("NULL");
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
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }

}

//insert elements between
void create(struct node **c)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("error");
        return;
    }
    printf("enter the data :");
    scanf("%d",&newnode->data);
    newnode->next=*c;
    *c=newnode;
}

//insert element btw by pos
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
    printf("\nEnter the position:");
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
    newnode->next=temp->next;
    temp->next=newnode;
}
//insert elements between by after which element
void insert_between(struct node **h)
{
    struct node *tp=*h;
    struct node *newnode;
    int key;

    printf("enter the value after which want to insert: \n");
    scanf("%d",&key);
    while(tp!=NULL && tp->data != key)
    {
        tp=tp->next;
    }
    if(tp==NULL)
    {
        printf("Value not found\n");
        return;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("memory allocation error\n");
        return;
    }
    printf("enter new value: ");
    scanf("%d",&newnode->data);
    newnode->next=tp->next;
    tp->next=newnode;
}
//delete first node
void del_first(struct node **h)
{
    struct node *temp=*h;
    if(*h==NULL)
    {
        printf("\nList is empty");
        return;
    }
    *h=temp->next;
    free(temp);
}

//delete last node
void del_last(struct node **h)
{
    struct node *temp=*h;
    struct node *prev=NULL;
    if(h==NULL)
    {
        printf("List is empty");
        return;
    }
    if(temp->next==NULL)
    {
        free(temp);
        *h=NULL;
        return;
    }
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    free(temp);
}

//delete at pos
void del_pos(struct node **h)
{
    int pos;
    printf("\n Enter the position:");
    scanf("%d",&pos);
    if(*h==NULL)
    {
        printf("\nList is Empty\n");
        return;
    }
    struct node *temp=*h;
    if(pos==1)
    {
        *h=temp->next;
        free(temp);
        return;
    }
    for(int i=1;temp!=NULL && i<pos-1;i++)
        temp=temp->next;
    struct node *next=temp->next->next;//temp->next is the node to be deleted. *netx is to point the next of temp->next
    free(temp->next);
    temp->next=next;//linking the list
}
//sorting data
void sort(struct node **h)
{
    struct node *i,*j;
    int temp;
    for(i=*h;i!=NULL;i=i->next)//runcs on each node
    {
        for(j=i->next;j!=NULL;j=j->next)//compare current node with remaining nodes
        {
            if(i->data>j->data)
            {
                temp=i->data;
                i->data=j->data;
                j->data=temp;
            }
        }
    }
    printf("\n Node sorted in Ascending order\n");
}
#endif // 1
#if 0
//basics of pointer
int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    printf("%d",q);//addre of p
    printf("%x",*q);//addres of a(*q=p,p=&a so)
    printf("%x",**q);//value of a
}
#endif // 1
