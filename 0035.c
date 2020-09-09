#include<stdio.h>

float power(float x,int n){
    if (n == 0)
        return 1;
else if(n>0)
    return x*power(x,n-1);
else if(n<0)
    return (1/x)*power(x,n+1);
}
int main(){
    float x;
    int n;
    printf("Enter a number:\n ");
    scanf("%f %d",&x,&n);
    printf("Result: %f\n", power(x,n));
    return 0;
}
