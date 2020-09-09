#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c,d,i,j,e,sum=0;
    printf("the dimentions of matrix x=\n");
    scanf("%d %d",&a,&b);
     printf("the dimentions of matrix y=\n");
    scanf("%d %d",&c,&d);

if(b!=c){
    printf("can't be multiplied");
        return 0;}
    int x[a][b],y[c][d],z[a][d];

  printf("enter the no. of matrix x=\n ");
        for(i=0;i<a;i++){
            for(j=0;j<b;j++){
                scanf("%d",&x[i][j]);}}

 printf("enter the no. of matrix y=\n ");
        for(i=0;i<c;i++){
            for(j=0;j<d;j++){
                scanf("%d",&y[i][j]);}}

 for(i=0;i<a;i++){
    for (e=0;e<b; e++){
     for(j=0;j<c;j++){
      sum+=x[i][j]*y[j][e]; }
      z[i][e]=sum;
      sum=0;}}

      for(i=0;i<a;i++){
            for(j=0;j<d;j++){
                printf("%d \t",z[i][j]);
printf("\n");
}}
}
