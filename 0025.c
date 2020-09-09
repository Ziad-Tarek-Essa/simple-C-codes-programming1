#include<stdio.h>
#include<math.h>

void main(){

int i,j,a,flag=1,sum;
printf("enter the no. of rows :");
scanf("%d",&a);
int x[a][3];
printf("enter the victors:\n ");
for(i=0;i<a;i++){
    for(j=0;j<3;j++){
    scanf("%d",&x[i][j]);
    sum=sum+x[i][j];}}

    for(i=0;i<3;i++){
            sum=0;
    for(j=0;j<3;j++){
        sum=sum+x[j][i];}
    if(sum!=0){
        flag=0;break;
    }}
    if(flag==1){
        printf("yes");
    }
    else{
        printf("No");
    }

}
