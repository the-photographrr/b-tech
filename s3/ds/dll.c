#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *llink,*rlink;
};

typedef struct node NODE;

NODE *start,*ptr;

int position,key,item;

void create_dll()
{
    NODE *new,*cptr;
    int ch1;
    new=(NODE*)malloc(sizeof(NODE));
    printf("\nEnter the data of 1st node: ");
    scanf("%d",&new->data);
    start=new;
    cptr=new;
    new->rlink=NULL;
    new->llink=NULL;
    do
    {
        new=(NODE*)malloc(sizeof(NODE));
        printf("\nEnter the data for the next node: ");
        scanf("%d",&new->data);
        new->rlink=NULL;
        new->llink=cptr;
        cptr->rlink=new;
        cptr=new;
        printf("\nEnter 1 to continue, 0 to stop: ");
        scanf("%d",&ch1);
    }
    while(ch1==1);
}

void add_front()
{
    printf("\nEnter element: ");
    scanf("%d",&item);
    NODE *new;
    new=(NODE*)malloc(sizeof(NODE));
    new->data=item;
    new->rlink=start;
    new->llink=NULL;
    start=new;
}

void add_rear()
{
    printf("\nEnter element: ");
    scanf("%d",&item);
    NODE *new,*ptr;
    new=(NODE*)malloc(sizeof(NODE));
    new->data=item;
    ptr=start;
    while(ptr->rlink!=NULL)
        ptr=ptr->rlink;
    ptr->rlink=new;
    new->llink=ptr;
    new->rlink=NULL;
}

void add_pos()
{
    printf("\nEnter key: ");
    scanf("%d",&key);
    printf("\nEnter element: ");
    scanf("%d",&item);
    NODE *new,*ptr;
    new=(NODE*)malloc(sizeof(NODE));
    new->data=item;
    ptr=start;
    while((ptr->data!=key)&&(ptr->rlink!=NULL))
        ptr=ptr->rlink;
    if(ptr->rlink==NULL)
        printf("\nNo node with data %n exists, insertion is not possible.",key);
    else
    {
        (ptr->rlink)->llink=new;
        (new->rlink)=ptr->rlink;
        ptr->rlink=new;
        new->llink=ptr;
    }
}

void del_front()
{
    if(start==NULL)
        printf("\nList is empty. Deletion is not possible.");
    else
    {
        NODE *ptr;
        ptr=start;
        start=start->rlink;
        free(ptr);
        if(start!=NULL)
            start->llink=NULL;
    }
}

void del_rear()
{
    if(start==NULL)
        printf("\nList is empty. Deletion is not possible.");
    else if(start->rlink==NULL)
        free(ptr);
    else
    {
        NODE *ptr;
        ptr=start;
        while(ptr->rlink!=NULL)
            ptr=ptr->rlink;
        (ptr->llink)->rlink=NULL;
        free(ptr);    
    }
}

void del_pos()
{
    if(start==NULL)
        printf("\nList is empty. Deletion not possible.");
    else if(start->rlink==NULL)
        free(ptr);
    else
    {
        printf("\nEnter key: ");
        scanf("%d",&key);
        NODE *ptr;
        ptr=start;
        while((ptr->data!=key)&&(ptr->rlink!=NULL))
            ptr=ptr->rlink;
        if(ptr->rlink==NULL)
            printf("\nKey not found. Deletion not possible.");
        else
        {
            (ptr->llink)->rlink=ptr->rlink;
            (ptr->rlink)->llink=ptr->llink;
            free(ptr);
        }
    }
}

void traverse()
{
    if(start==NULL)
        printf("\nList is empty.");
    else
    {
        NODE *ptr;
        ptr=start;
        while(ptr!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr=ptr->rlink;
        }
    }
}

int main()
{
    int ch;
    while(1)
    {
        printf("\n1: Create dll\n2: Add at front\n3: Add at rear\n4: Add in between\n5: Delete from front\n6: Delete from rear\n7: Delete from between\n8: Traverse\n9: Exit\nEnter choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                create_dll();
                break;
            }
            case 2:
            {
                add_front();
                break;
            }
            case 3:
            {
                add_rear();
                break;
            }
            case 4:
            {
                add_pos();
                break;
            }
            case 5:
            {
                del_front();
                break;
            }
            case 6:
            {
                del_rear();
                break;
            }
            case 7:
            {
                del_pos();
                break;
            }
            case 8:
            {
                traverse();
                break;
            }
            case 9:
            {
                return(0);
            }
        }
    }
}
