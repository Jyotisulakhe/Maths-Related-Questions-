#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("enter no:");
    scanf("%d",&n);
    for(int i=1;i<=n; i++){
        fact=fact*i;
    }
    printf("Final factorial %d",fact);
}
