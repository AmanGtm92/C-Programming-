#include<stdio.h>
int main()
{
    int i,n,rev=0;
    printf("Enter the number :");
    scanf("%d",&n);

    for(i=n;i>0;i=i/10)
    {
        rev = rev *10 +(i%10);
    }

    printf("%d",rev);


    return 0;
}