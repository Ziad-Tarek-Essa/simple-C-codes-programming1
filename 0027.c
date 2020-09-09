#include<stdio.h>

int count(int *no){
int c;
for(c=0;*no!=0;c++){
    *no=*no/10;}
    return c;}

    void main(){
    int no;
    printf("enter the no.=");
    scanf("%d",&no);
    printf("no. of digits= %d",count(&no));
    }
