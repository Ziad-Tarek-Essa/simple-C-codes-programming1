
#include <stdio.h>

void swap( int p1, int p2 )
{int t;
    t = p2;
    p2 = p1;
    p1 = t;    }

int main(){
   int a,b;
   printf("enter 2 no.");
   scanf("%d %d",&a,&b);
   printf("Value of a = %d and value of b = %d\n", a, b );
   swap( a, b );
   printf("Value of a = %d and value of b = %d\n", a, b );
}
