#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,i,a,sum=0;
    printf("enter a no.=");
    scanf("%d",&x);
    y=x;
    for(i=0; y!=0; ++i)
    {
        y=y/10;
    }

    y=x;
    for(a=1; a<=i; a++)
    {
        sum+=pow((y%10),i);
        y=y/10;
    }
    if(x==sum)
        printf("Armstrong number");
    else
        printf("not Armstrong number");
    return 0;
}
