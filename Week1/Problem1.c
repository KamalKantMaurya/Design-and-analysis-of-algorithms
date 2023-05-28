//kamal kant
#include<stdio.h>
int main()
{
    int key,n,t,arr[100],count;
    printf("Enter the number of test cases:\n");
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        count=0;
        printf("\nEnter the size of the array:\n");
        scanf("%d",&n);
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[j]);
        }
        printf("Enter the element you want to search:\n");
        scanf("%d",&key);
        for(int j=0;j<n;j++)
        {
            if(arr[j]==key)
            {
                printf("%d present",key);
                count=1;
            }
        }
        if(count==0)
        {
            printf("%d not present",key);
        }
    }
}