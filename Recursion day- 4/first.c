#include<stdio.h>

void main()
{
    int i,j,rows;

    printf("enter value:");
    scanf("%d",&rows);

    for(i=1;i<=rows;++i)
    {



        for(j=1;j<=i;++j)
        {
            printf("%d",j);  

        }
        printf("\n");     
    
    }




}
