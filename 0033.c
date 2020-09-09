#include<stdio.h>
int fac(int n)
{
   if(n==0)
      return(1);

   return(n*fac(n-1));
}

int main()
{
   int n;
   printf("Enter an int.:");
   scanf("%d",&n);

   printf("\nfactorial of %d is: %d",n, fac(n));
   return 0;
}

