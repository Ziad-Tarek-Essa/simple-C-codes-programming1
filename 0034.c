#include<stdio.h>
#include<math.h>
int rev(int x){
    int sum=0,y;
    while(x>0){
        y=x%10;
        sum=(sum*10)+y;
        x=x/10;
    }
    return sum;
    }


int main(){
    int x;
    printf("enter a no.");
    scanf("%d",&x);

printf("the reverse is :%d",rev(x));
return 0;}
