#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
  //  struct node *start;
}NODE;

int main ()
{
    typedef struct node node;
    node *cptr,*new,*start, *ptr;
    int choice;
    int value;
    new = (node *) malloc(sizeof(NODE));
   
    printf("Enter the value for the first node \n");
    scanf("%d",&new -> data);
    start = new;
    cptr = new;
    new -> link = NULL;
    do{
        new = (node *) malloc(sizeof(NODE));
        printf("Enter the value for the next node \n");
        scanf("%d",&new -> data);
        new -> link = NULL;
        cptr -> link = new;
        cptr = new;
        printf("Do you want to continue\n 1.Continue 2.No ? \n");
        scanf("%d",&choice);
    }while(choice == 1);
    ptr = start;
    while (ptr != NULL)
    {
        printf("%d ",ptr -> data);
        ptr = ptr -> link;
    }
    

    return(0);

}