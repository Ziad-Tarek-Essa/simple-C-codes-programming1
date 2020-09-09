#include<stdio.h>
#include<math.h>

void main(){
int a;
float sum=0;
     float x;
printf("enter the no. of int:");
scanf("%d",&a);

int n[a],i=0;
for(i;i<a;i++){
        scanf("%d",&n[i]);
        sum+=n[i];}

    x=1.0*sum/a;
    printf("average =%f\n",x);

for(i=0;i<a;i++){
    printf("deviation of %d=%f\n",i,n[i]-x);}
}
