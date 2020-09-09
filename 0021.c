#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m,i,j,sumrow=0,sum=0;
    scanf("%d%d",&n,&m);
    int x[n][m];

    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        scanf("%d",&x[i][j]);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            sumrow+=x[i][j];
        printf("sum of row %d=%d\n",i,sumrow);
        sum+=sumrow;
        sumrow=0;
        sum=1.0*sum/(n*m);
        printf("%d",sum);
    }
    return 0;}

