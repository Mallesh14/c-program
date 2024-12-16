#include<stdio.h>
int main()
{
    int n,num;
    scanf("%d",&n);
    num=((n-1)+(n-2));
    while(n>0)
    {
        if(n==num)
    printf("Fibonacci number");
    else
    printf(" not fibonacci number");
    break ;}
    return 0;
}
