#include<stdio.h>
int main()
{
    int i,n,arm=0;
    printf("Enter the armstrong number :");
    scanf("%d",&n);

    for(i=n; i>0; i=i/10)

    {
        arm = arm + (i%10) * (i%10) * (i%10);
    }
    if(arm==n)
    
        printf("this is armstrong number");
    
   
   else
   
    printf("No armstrong number ");
   
    return 0;
}