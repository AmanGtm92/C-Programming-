#include<stdio.h>
int main()
{
    int i,term;
    int n1=0, n2=1,nn;

    printf("Enter the number :");
    scanf("%d",&term);

    if(term==1)
    printf("%d",n1);

    if(term==2)
    printf("%d",n2);

    for(i=3; i<=term; i=i+1)
    {
    nn=n1+n2;
    }
    printf("%d",nn);
    n1==n2;
    n2==nn;


    return 0;
}