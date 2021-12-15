#include<stdio.h>
#include<stdlib.h>
int main(){
    int row,col;
    printf("Enter the no.of rows for the matrix \n");
    scanf("%d",&row);
    printf("Enter the no.of cols for the matrix \n");
    scanf("%d",&col);

    int a[row][col];
    int colSize =0;
    char c[3];
    c[0] = 'r';
    c[1] = 'c';
    c[2] = 'v';
    
    printf("Enter the values \n");
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        }

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
       
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] != 0)
            {
                colSize++;
            }
            
        }
    int ans[3][colSize];
    int colm = 0;

     for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] != 0)
            {
                ans[0][colm] = i;
                ans[1][colm] = j;
                ans[2][colm] = a[i][j];
                colm++;
            }
            
        }
    for (int i = 0; i < 3; i++){

        printf("\n");
        printf("%c: ",c[i]);
        for (int j = 0; j < colSize; j++)
        {
            printf("%d ",ans[i][j]);
        }
        
    }
    
    return 0;
}