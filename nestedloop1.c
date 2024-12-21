#include <stdio.h>
void main()
{
    // write a program that generate table in range

    int s,e;

    printf("enter starting number : ");
    scanf("%d",&s);

    printf("enter ending number : ");
    scanf("%d",&e);

    if (s>=e)
    for (int start = s; start>=e ; start--)
    {

        printf("--------table %d--------\n",start);
        for (int i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", start, i, start * i);
        }
        printf("\n");

    }

else if (s<=e)
{
    for (int start = s; start<=e ; start++)
    {

        printf("--------table %d--------\n",start);
        for (int i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", start, i, start * i);
        }
        printf("\n");

    }
}
else 
{
    printf("Invalied Input!!!!!");
}
}

    // for(int i =1; i<=10; i++)
    // {
    //     printf("%d x %d = %d\n",start,i,start*i);
    // }

    // start++;
    // for(int i =1; i<=10; i++)
    // {
    //     printf("%d x %d = %d\n",start,i,start*i);
    // }

    // start++;
    // for(int i =1; i<=10; i++)
    // {
    //     printf("%d x %d = %d\n",start,i,start*i);
    // }
}
