q.write a program to add 2 no.

#include <stdio.h>

int addition(int a, int b)
{
     int sum;
     sum = a+b;
     return sum;}

int main(){
     int x, y;
     printf("enter number 1: ");
     scanf("%d",&x);
     printf("enter number 2: ");
     scanf("%d",&y);
     int res = addition(x,y);
     printf ("sum=%d", res);

     return 0;}
