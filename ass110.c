#include<stdio.h>
int trees(int a,int b){
int tr;
tr=a/b+1;
return tr;}

int cost(int c,int t){
int total;
total=c*t;
return total;}

int main()
{
 int x,y,z,i;
 printf("enter the length of the street in m:\n");
 scanf("%d",&x);

 printf("enter the distance between the trees:\n");
 scanf("%d",&y);

 printf("enter a cost for the tree:\n");
 scanf("%d",&z);

 printf("the no. of trees:%d\n",trees(x,y));
 i=trees(x,y);
 printf("the cost:%d\n",cost(z,i));
 return 0;}

