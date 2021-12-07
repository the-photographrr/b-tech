#include<stdio.h>
void main()
{
    int a[6],n,r,f=-1,k,i;
    char c;
    printf("input the number of elements to be inputted:");
    scanf("%d",&n);
    for(r=2;r<n+2;r++)
    {
        printf("\nInput the %d element:",r-1);
        scanf("%d",&a[r]);
        printf("the queue is:\n");
        for(i=2;i<=r;i++)
            printf("%d\t",a[i]);
    }
    r--;
    i=2;
    printf("\nthe inputted queue is:\n");
    while((r+1)%6!=i)
    {
        printf("%d\t",a[i]);
        i=(i+1)%6;
    }
    f=2;

    do{
        if((r+1)==((f)%6))
        {
            f=-1;
            r=-1;
            printf("queue underflow!!!");
            break;
        }
        else
        {
            k=a[f];
            f=(f+1)%6;
            printf("\nthe new queue is:\n");
            i=f;
            while((r+1)%6!=i)
            {
                printf("%d\t",a[i]);
                i=(i+1)%6;
            }
        }
        printf("\ninput 'y'  if deletion is to be done again...");
        scanf("%s",&c);
      }while(c=='y');
}
