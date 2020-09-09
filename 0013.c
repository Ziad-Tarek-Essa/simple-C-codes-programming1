#include<stdio.h>
#include<stdlib.h>
void main()
{
 int x,i;
 printf("enter a positive int.:");
 scanf("%d",&x);
 printf("factors of %d:\n",x);
 for(i=1;i<=x;i++){
    if(x%i==0)
        printf("%d ",i);}
}
