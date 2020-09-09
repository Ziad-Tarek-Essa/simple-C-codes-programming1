
#include<stdio.h>
#include<math.h>

void main(){
    int i,j=1,z,n,f=1,s=1;
    float x,sum=0;
printf("enter the angle:");
    scanf("%f",&x);
    printf("enter the no. of terms:");
    scanf("%d",&n);
       for(i=1;i<=n;i++){
    for(z=1;z<=j;z++){
        f*=z;}
        sum+=s*pow(x,j)/f;
        s*=-1;
        j+=2;}
        printf("sin(%f)=%f\n",x,sum);
    }

