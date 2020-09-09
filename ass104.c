
#include<stdio.h>
int fact(int y){

    for(int i=1;i<=y;i++){
    if(y%i==0)
        printf("%d",i);}}
void main()
{
 int x;
 printf("enter a positive int.:");
 scanf("%d",&x);
 printf("factors of %d:",fact(x)); }

