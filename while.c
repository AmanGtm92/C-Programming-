#include<stdio.h>
int main()
{
    int n,i,term;
    int n1=0, n2=1, n3;
    printf("enter the number :");
    scanf("%d",&term);
    i=n;

    if(term==1)
    {
        printf("%d\n",n1)
    }
    if(term==2)
    {
        printf("%d\n",n2);
    }

    print("%d%d",n1,n2);

    while(i<=term)
    n3=n1+n2;
    printf("%d",n3);
    n1=n2;
    n2=n3;
    i++;

return 0;
}