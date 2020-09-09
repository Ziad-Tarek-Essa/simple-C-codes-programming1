#include<stdio.h>

void main(){
    int a;
    printf("enter the no. of letters:");
    scanf("%d",&a);
  //  a=a+1;//
char s[a];
int i,flag=1;
printf("enter the string :");
scanf("%s",s);
for(i=0;i<a;i++){
    if(s[i]!=s[a-i-1]){
        flag=0;}
}
if(flag==1)
    printf("palindrom");
else
    printf(" not palindrom");
}
