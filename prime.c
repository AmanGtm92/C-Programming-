#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=2; i<=n-1;i++)

    if(n%i==0)

    break;

    if(i==n)
    
    printf("it's prime number ");

    else 
    
    printf("NO");
    

    return 0;
}